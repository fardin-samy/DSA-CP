void build(int a,int b){
	int cnt=1,n=a+b+2;
	for(int i=1;i<=n;i+=2)
		ans[i] = cnt++;
 
	for(int i=2;i<=n;i+=2)
		ans[i] = cnt++;
	if(b>a) for(int i=1;i<=n;i++) ans[i] = n-ans[i]+1;
}
