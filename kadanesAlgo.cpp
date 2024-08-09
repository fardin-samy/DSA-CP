std::vector<int> v(n+1);
	fri(0,n) cin>>v[i];
	int cur=0,mx=0;
	for(int i=0;i<n;i++)
	{
		cur+=v[i];
		mx=max(cur,mx);
		cur=max(cur,0LL);
	}
