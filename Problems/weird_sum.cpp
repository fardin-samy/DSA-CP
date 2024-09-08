//https://codeforces.com/contest/1648/problem/A
//learned: In Manhattan distance we can calculate the x-axis and the y-axis separately.

int n,m;cin>>n>>m;
	std::map<int,vector<int>> mpx,mpy;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int x;
			cin>>x;
			mpx[x].pb(i);
			mpy[x].pb(j);
		}
	}
	int ans=0;
	for(auto &it:mpx){
		sort(all(it.ss));
		int n=it.ss.size();
		int ps=0;
		for(int i=0;i<n;i++){
			ans+=(i*(it.ss[i])-ps);
			ps+=it.ss[i];
		}
 
	}
	for(auto &it:mpy){
		sort(all(it.ss));
		int n=it.ss.size();
		int ps=0;
		for(int i=0;i<n;i++){
			ans+=(i*(it.ss[i])-ps);
			ps+=it.ss[i];
		}
 
	}
	cout<<ans<<endl;
