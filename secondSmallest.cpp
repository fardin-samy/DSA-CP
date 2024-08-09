int ssmallest=INT_MAX,smallest=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<smallest)
		{
			ssmallest=smallest;
			smallest=a[i];
		}
		else if(a[i]!=smallest and a[i]<ssmallest)
		{
			ssmallest=a[i];
		}
	}
	cout<<ssmallest<<endl;
