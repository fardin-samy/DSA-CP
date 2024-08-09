set<int>st;
	int mex=0;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		v.pb(x);
		st.insert(x);
		while(st.count(mex)) 
			mex++;
				
	}
