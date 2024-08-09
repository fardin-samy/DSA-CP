int wt[105],val[105];
int dp[105][N];
int f(int ind,int w)
{
	if(w==0 or ind<0) return 0;
	if(dp[ind][w]!=-1) return dp[ind][w];
	int ans;
	ans=f(ind-1,w);
	if(w-wt[ind]>=0)
	ans=max(ans,f(ind-1,w-wt[ind])+val[ind]);
	return dp[ind][w]=ans;
}
