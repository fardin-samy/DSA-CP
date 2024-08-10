int ans=-1;
	if(n==1) ans=0;
	if(a[0]>a[1]) ans=1;
	if(a[n-1]>a[n-2]) ans=n-1;
	int low=1,high=n-2;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]>a[mid-1] and a[mid]>a[mid+1])
		{
			ans=mid;
			break;
		}
		else if(a[mid]>a[mid-1]) low=mid+1;
		else high=mid-1;
	}
