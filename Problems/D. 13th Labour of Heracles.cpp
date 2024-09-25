//https://codeforces.com/contest/1466/problem/D
//learned: we can find a leaf node using the concept of degree.
// if degree==1 then it will be the leaf node , if degree>=2 then it will not be a leaf node.
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
	std::vector<int> a(n),deg(n+1,0);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n-1;i++){
		int x,y;cin>>x>>y;
		deg[x]++;
		deg[y]++;
	}
	priority_queue<pair<int,int>>pq;
	for(int i=1;i<=n;i++) {
		if(deg[i]>1) pq.push({a[i-1],deg[i]-1});
	}
	int sum=accumulate(all(a),0ll);
	cout<<sum<<' ';
	for(int i=0;i<n-2;) {
		int x=pq.top().fs;
		int y=pq.top().ss;
		pq.pop();
		while(y>0 and i<n-2){
			sum+=x;
			cout<<sum<<' ';
			y--;
			i++;
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
