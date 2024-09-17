//https://codeforces.com/contest/1195/problem/C
// A cool dp problem

#include<bits/stdc++.h>
#define endl '\n'
#define fs first
#define ss second
#define pb push_back
#define int long long
#define inf 1e15
#define all(a) a.begin(),a.end()
#define FAST ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

const int N=2e5+9;

int dp[2][N];

void solve(){

	int n;cin>>n;
	std::vector<int> a(n),b(n);
	int ans;
	for (int i = 0; i < n; ++i) cin>>a[i];
	for (int i = 0; i < n; ++i) cin>>b[i];
	for (int i = 1; i <= n; ++i) {

		dp[0][i]=max(dp[0][i-1],dp[1][i-1]+b[i-1]);
		dp[1][i]=max(dp[1][i-1],dp[0][i-1]+a[i-1]);
		ans=max(dp[0][i],dp[1][i]);
	}
	cout<<ans<<endl;
}   
int32_t main()
{  
   FAST;
    int tc;
    tc=1;
    // cin>>tc;
    while(tc--)
    solve();
}
