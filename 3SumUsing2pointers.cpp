	vector<vector<int>>ans;
	srt(a);
	for(int i=0;i<n;i++)
	{
		if(i>0 and a[i]==a[i-1]) continue;
		int j=i+1;
		int k=n-1;
		while(j<k)
		{
			int sum=a[i]+a[j]+a[k];
			if(sum<0)
			{
				j++;
			}
			else if(sum>0)
			{
				k--;
			}
			else 
			{
				vector<int>temp={a[i],a[j],a[k]};
				ans.pb(temp);
				j++;
				k--;
				while(j<k and a[j]==a[j-1]) j++;
				while(j<k and a[k]==a[k+1]) k--;
			}
		}
	}
