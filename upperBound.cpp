int low=0,high=n-1,ans=n;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]>x)
		{
			ans=mid;
			high=mid-1;
		}
		else low=mid+1;
	}
