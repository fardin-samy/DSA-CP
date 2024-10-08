//https://codeforces.com/contest/1520/problem/E
//learned: for leveling common elements arrange all the elements toward the middle element
int n;cin>>n;
	string s;cin>>s;
	if(n==1) {
		cout<<0<<endl;
		return;
	}
	int c=count(all(s),'.');
	if(c==0 or c==n){
		cout<<0<<endl;
		return;
	}
	int cnt=0;
	for(int i=1;i<n;i++){
		if((s[i-1]=='*' and s[i]=='.') or (s[i-1]=='.' and s[i]=='*')){
			cnt++;
		}
	}
	if(cnt==1){
		cout<<0<<endl;
		return;
	}
	c=count(all(s),'*');
	if(c&1){
		int pos;
		int m=c/2+1;
		int x=0;
		for(int i=0;i<n;i++){
			if(s[i]=='*') {
				x++;
				if(x==m){
					pos=i;
					break;
				}
			}
		}
		int ans=0,y=1;
		for(int i=0;i<pos;i++){
			if(s[i]=='*'){
				ans+=(pos-y-i);
				y++;
			}
		}
		y=1;
		for(int i=pos+1;i<n;i++){
			if(s[i]=='*'){
				ans+=(i-pos-y);
				y++;
			}
		}
		cout<<ans<<endl;
	}
	else {
		int pos;
		int m=c/2;
		int x=0;
		for(int i=0;i<n;i++){
			if(s[i]=='*') {
				x++;
				if(x==m) {
					pos=i;
					break;
				}
			}
		}

		int ans=0,y=1;
		for(int i=0;i<pos;i++){
			if(s[i]=='*'){
				ans+=(pos-y-i);
				y++;
			}
		}
		y=1;
		for(int i=pos+1;i<n;i++){
			if(s[i]=='*'){
				ans+=(i-pos-y);
				y++;
			}
		}
		cout<<ans<<endl;
	}
//alternative solution:

ll  n;cin>>n;
     string s;cin>>s;
     ll  cnt=0 ,start=-1 ,end=-1 ;
     
     for (int i=0;i<n;i++)
      {
          if (s[i]=='*')
           {
               cnt++;
               if (start==-1)
                {
                    start=i;
                    
                }
                else
                    end=i;
           }
      }
      // if count of sheep is 0 or 1 then no move needed 
      if (start==-1 ||end==-1)
       {
           cout<<0<<"\n";
           return ;
       }
       
       //if the sheeps are already aligned then no move needed 
       
       if (end-start+1==cnt)
        {
            cout<<0<<"\n";
            return ;
        }
        
        //*.*...*.**  1+2+2+2+2=9 
        ll  ans=0 ,left=0;
        for (int i=start;i<=end;i++)
         {
             if (s[i]=='*') left++; //just move forward 
             else 
             ans+=min (left,cnt-left);
             
         }
        
       cout<<ans<<"\n";
 }
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
           
      
 
