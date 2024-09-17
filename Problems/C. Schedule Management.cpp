//https://codeforces.com/contest/1701/problem/C
// a good binary src problem

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
void solve(){

	int n,m;cin>>n>>m;
	std::vector<int> cnt(n,0);
	for(int i=0;i<m;i++){
		int x;cin>>x;
		x--;
		cnt[x]++;
	}

	auto f=[&](int t){
		int taskLeft=0,help=0;
		for(int i=0;i<n;i++){
			if(t>=cnt[i]) help+=(t-cnt[i])/2;
			else taskLeft+=(cnt[i]-t);
		}
		return taskLeft<=help;
	};
	int l=0,r=2*m;
	int ans=-1;
	while(l<=r){
		int mid=(l+r)>>1;
		if(f(mid)){
			ans=mid;
			r=mid-1;
		}
		else l=mid+1;
	}
	cout<<ans<<endl;

	
}   
int32_t main()
{  
   FAST;
    int tc;
    tc=1;
    cin>>tc;
    while(tc--)
    solve();
}
