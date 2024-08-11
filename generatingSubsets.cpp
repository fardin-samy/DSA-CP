vector<vector<int>>subsets;
	for(int mask=0;mask<(1<<n);mask++)
	{
		vector<int>subset;
		for(int i=0;i<n;i++)
		{
			if((1<<i)&mask)
			{
				subset.pb(v[i]);
			}
		}
		subsets.pb(subset);
	}
