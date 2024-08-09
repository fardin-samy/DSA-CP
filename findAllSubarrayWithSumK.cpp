int k;cin>>k;
	std::map<int,int> mp;
	mp[0]=1;
	int preSum=0,cnt=0;
	for(int i=0;i<n;i++)
	{
		preSum+=a[i];
		int remove=preSum-k;
		cnt+=mp[remove];
		mp[preSum]+=1;
	}
