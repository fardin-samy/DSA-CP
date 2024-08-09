int d;cin>>d;
	//left shifting d places
	reverse(v.begin(),v.begin()+d);
	reverse(v.begin()+d,v.end());
	reverse(v.begin(),v.end());
