int slargest=-1,largest=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>largest)
		{
			slargest=largest;
			largest=a[i];
		}
		else if(a[i]<largest and a[i]>slargest)
		{
			slargest=a[i];
		}
	}
