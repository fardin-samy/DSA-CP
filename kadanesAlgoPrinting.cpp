int sum=0,mx=INT_MIN,start,ansEnd,ansStart;
		for(int i=0;i<n;i++)
		{
			if(sum==0) start=i;
			sum+=a[i];
			if(sum>mx)
			{
				mx=sum;
				ansStart=start;
				ansEnd=i;
			}
			if(sum<0)
			{
				sum=0;
			}
		}
		for(int i=ansStart;i<=ansEnd;i++) cout<<a[i]<<' ';
