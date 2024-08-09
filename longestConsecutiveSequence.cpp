unordered_set<int>st;
	for(int i=0;i<n;i++) st.insert(a[i]);
	int longest=0;
	for(auto it:st)
	{
		if(!st.count(it-1))
		{
			int cnt=1;
			int x=it;
			while(st.count(x+1))
			{
				x=x+1;
				cnt++;
			}
			longest=max(longest,cnt);
		}
	}

	cout<<longest<<endl;
