vector<int>ans;
int i=0,j=0;
	while(i<a.size() and j<b.size())
	{
		if(a[i]<b[j]) i++;
		else if(a[i]>b[j]) j++;
		else 
		{
			ans.pb(a[i]);
			i++,j++;
		}
	}
