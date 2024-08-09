int mn=a[0],profit=0;
	for(int i=1;i<n;i++)
	{
		int cost=a[i]-mn;
		profit=max(profit,cost);
		mn=min(mn,a[i]);
	}
