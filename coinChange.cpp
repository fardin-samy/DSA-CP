std::vector<int>dp(100005,inf);
int a[100000];
int coin[]={1,3,6,10,15};
void f()
{
	// memset(dp,0x3f,sizeof(dp));
	dp[0]=0;
	for(int i=1;i<=100000;i++)
	{
		for(int j=0;j<5;j++) //fix coin size
		{
			if(i-coin[j]>=0)
				dp[i]=min(dp[i],dp[i-coin[j]]+1);
		}
	}
}
