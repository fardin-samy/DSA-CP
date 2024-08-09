int mx=INT_MIN;
	vector<int>ans;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]>mx)
		{
			ans.pb(a[i]);
			mx=a[i];
		}
	}
