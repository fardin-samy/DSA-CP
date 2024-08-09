bool cmp(pair<int,int>a ,pair<int,int>b){
	if(a.fs!=b.fs)
	{
		return a.first<b.first;
	}
	return a.ss>b.ss;
}
