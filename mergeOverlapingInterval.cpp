vector<vector<int>>ans;
	for(int i=0;i<n;i++)
	{
		if(ans.empty() or a[i][0] >ans.back()[1])
		{
			ans.pb(a[i]);
		}
		else 
		{
			ans.back()[1]=max(ans.back()[1],a[i][1]);
		}
	}
