//https://codeforces.com/problemset/problem/1872/E
// instead of thinking Segment tree try to solve any problem using prefix sum.
// when it's about problem of XOR then try to implemnet this concept: even number of xor is 0 and odd number of xor is x.
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
const int N=1e5+10;

void solve(){	
		
	int n;cin>>n;
	std::vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	vector<int>prex(n+1,0);
	for(int i=1;i<=n;i++){
		prex[i]=prex[i-1]^a[i-1];
	}
	int one=0,zero=0;
	string s;cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='1') one^=a[i];
		else zero^=a[i];
	}
	int q;cin>>q;
	while(q--){
		int x;cin>>x;
		if(x==1){
			int l,r;cin>>l>>r;
			int y=prex[r]^prex[l-1];
			one^=y;
			zero^=y;
		}
		else {
			int u;cin>>u;
			if(u==1) cout<<one<<' ';
			else cout<<zero<<' ';
		}

	}
	cout<<endl;
	
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
