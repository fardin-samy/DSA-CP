set<vector<int> >st;
	for(int i=0;i<n;i++)
	{
		set<int>hashset;
		for(int j=i+1;j<n;j++)
		{
			int third=-(a[i]+a[j]);
			if(hashset.count(third))
			{
				vector<int>temp={a[i],a[j],third};
				srt(temp);
				st.insert(temp);
			}
			hashset.insert(a[j]);
		}
	}
	vector<vector<int>>ans(st.begin(),st.end());
