//https://codeforces.com/contest/1673/problem/C
//learned : by using coin combination concept we can solve this problem and problems like 
// number of distinct ways to make a target
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
const int mod=1e9+7;
vector<int>dp(40005,0),pal;
bool is_palindrome(int x){
	string s=to_string(x);
	int i=0,j=s.size()-1;
	while(i<=j) {
		if(s[i]!=s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}
void ways() {

	for(int i=1;i<40005;i++){
		if(is_palindrome(i)) pal.pb(i);
	}
	dp[0]=1;
	for(int i=0;i<pal.size();i++){
		for(int j=1;j<40005;j++){
			if(j>=pal[i])
			dp[j]=(dp[j]+dp[j-pal[i]])%mod;
		}
	}
}

void solve(){	

	int n;
	cin>>n;
	cout<<dp[n]<<endl;
}   
int32_t main()
{  
   FAST;
   ways();
    int tc;
    tc=1;
    cin>>tc;
    while(tc--)
    solve();
}
