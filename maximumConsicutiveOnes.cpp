int mx=0,cnt=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==1) 
		{
			cnt++;
			mx=max(mx,cnt);
		}
		else 
		{
			cnt=0;
		}
	}
