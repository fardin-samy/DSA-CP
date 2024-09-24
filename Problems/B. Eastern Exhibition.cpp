//https://codeforces.com/contest/1486/problem/B
//learned: optimal to place a point is median of the axis
// median(must be sorted)--> odd numbers of array: n/2 th element
//                       -->even numbers of array: n/2-1 and n/2 th elements
//for points : n/2-1 to n/2 th points for even(n) and the middle one for odd(n).
//when the problem is about mantathan distance then try to solve x axis and y axis seperately.
#include<bits/stdc++.h>
#define endl '\n'
#define fs first
#define ss second
#define pb push_back
#define int long long
#define inf 1e18
#define all(a) a.begin(),a.end()
#define FAST ios_base::sync_with_stdio(false),cin.tie(NULL)
using namespace std;

void solve(){	

	int n;cin>>n;
	std::vector<int> xa,ya;
	for(int i=0;i<n;i++){
		int x,y;cin>>x>>y;
		xa.pb(x);
		ya.pb(y);
	}
	if(n&1){
		cout<<1<<endl;
		return;
	}
	sort(all(xa));
	sort(all(ya));
	int ans=(xa[n/2]-xa[n/2-1]+1)*(ya[n/2]-ya[n/2-1]+1);
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
