#include<bits/stdc++.h>
#define endl '\n'
#define fs first
#define ss second
#define pi acos(-1.0)
#define pb push_back
#define int long long
#define inf 1e18
#define fr(b) for(int i=0;i<b;i++)
#define srt(a) sort(a.begin(),a.end())
#define rsrt(a) sort(a.rbegin(),a.rend())
#define khelaSesh return 0
#define FAST ios_base::sync_with_stdio(false),cin.tie(NULL)
const int N=2e5+10;
using namespace std;
void solve()
{
	int n,m,k;cin>>n>>m>>k;
	vector<int>a(n),b(m);
	map<int,int> mpA,mpB;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) 
	{
		cin>>b[i];
		mpB[b[i]]++;
	}
	int cnt=0,gd=0;
	for(int i=0;i<m;i++)
	{
		mpA[a[i]]++;
		if(mpB[a[i]]>=mpA[a[i]]) cnt++;
	}	
	if(cnt>=k) gd++;
	for(int i=0;i<n-m;i++)
	{	
		if(mpB[a[i]]>=mpA[a[i]]) cnt--;
		mpA[a[i]]--;
		mpA[a[i+m]]++;
		if(mpB[a[i+m]]>=mpA[a[i+m]]) cnt++;
		if(cnt>=k) gd++;
	}
	cout<<gd<<endl;
}
int32_t main()
{
   FAST;
	int tc;
	tc=1;
	cin>>tc;
	while(tc--)
	solve();
	khelaSesh;
}
