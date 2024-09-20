//https://codeforces.com/problemset/problem/1795/C
//learned : binary search in a specific range using prefix sum and precalculation of fully contributed range.

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
		
	int n;cin>>n;
	vector<int> a(n+5),b(n+5);
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];

	vector<int>pre(n+5,0),extra(n+5,0),times(n+5,0);
	
	for(int i=1;i<=n;i++) {
		pre[i]=pre[i-1]+b[i];
	}
	for(int i=1;i<=n;i++) {
		if(a[i] >= (pre[n]-pre[i-1])) {
			times[i]++;
			times[n+1]--;
			continue;
		}
		int l=i,r=n,mxId=-1;
		while(l<=r) {
			int mid=(l+r)>>1;
			if(a[i] >= (pre[mid]-pre[i-1])){
				mxId=mid;
				l=mid+1;
			}
			else r=mid-1;
		}
		if(mxId==-1) extra[i]+=a[i];
		else {
			times[mxId+1]--;
			times[i]++;
			extra[mxId+1]+=(a[i]-(pre[mxId]-pre[i-1]));
		}
	}
	for(int i=1;i<=n;i++) times[i]+=times[i-1];
	for(int i=1;i<=n;i++){
		int x=0;
		x+=extra[i];
		x+=(times[i]*b[i]);
		cout<<x<<' ';
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
