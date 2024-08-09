int k;cin>>k;
	int xr=0;
	std::map<int,int> mp;
	mp[xr]++;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		xr=xr^a[i];
		int x=xr^k;
		cnt+=mp[x];
		mp[xr]++;
	}
