//https://codeforces.com/contest/1634/problem/B
//learned: sum(+) and xor(^) have the same parity(even or odd).

	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	
	for(int i=0;i<n;i++){
		x^=v[i];
	}
	if(x%2==y%2) cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl;
