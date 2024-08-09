int dp[1005][1005];
string s,k;
int lcs(int i,int j)
{
	if(i<0 or j<0) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	int ans=0;
	ans=lcs(i-1,j);
	ans=max(lcs(i,j-1),ans);
	ans=max(ans,lcs(i-1,j-1)+(s[i]==k[j]));
	return dp[i][j]=ans;
}
