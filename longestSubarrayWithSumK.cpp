int k;cin>>k;
	int left=0,right=0;
	int sum=a[0],mxLen=0;
	while(right<n)
	{
		while(left<=right and sum>k)
		{
			sum-=a[left];
			left++;
		}
		if(sum==k)
		{
			mxLen=max(mxLen,right-left+1);
		}
		right++;
		if(right<n) sum+=a[right];
	}
