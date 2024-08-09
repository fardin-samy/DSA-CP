int binExp(int a,int b)
{
	if(b==0) return 1;
	int res=binExp(a,b/2);
	if(b&1) return (a*(res*res)%M)%M;
	else return (res*res)%M;
}
