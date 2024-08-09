int target=0;
	vector<vector<int>>ans;
	srt(a);
	for(int i=0;i<n;i++)
	{
		if(i>0 and a[i]==a[i-1]) continue;
		for(int j=i+1;j<n;j++)
		{
			if(j!=i+1 and a[j]==a[j-1]) continue;
			int k=j+1;
			int l=n-1;
			while(k<l)
			{
				int sum=a[i]+a[j]+a[k]+a[l];
				if(sum==target)
				{
					vector<int>temp={a[i],a[j],a[k],a[l]};
					ans.pb(temp);
					k++;
					l--;
					while(k<l and a[k]==a[k-1]) k++;
					while(k<l and a[l]==a[l+1]) l--;
				}
				else if(sum<target)
				{
					k++;
				}
				else 
				{
					l--;
				}
			}
		}

		
		
	}
