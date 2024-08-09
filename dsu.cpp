#include<bits/stdc++.h>
#define endl '\n'
#define fs first
#define ss second
#define pi acos(-1.0)
#define pb push_back
#define int long long
#define inf 1e9
#define decimal(x) fixed<<setprecision(x)
#define fri(a,b) for(int i=a;i<b;i++)
#define srt(a) sort(a.begin(),a.end())
#define rsrt(a) sort(a.rbegin(),a.rend())
#define khelaSesh return 0
#define FAST ios_base::sync_with_stdio(false),cin.tie(NULL)
const int mod=1e9+7;
const int N=2e5+10;
using namespace std;
int par[N],size[N];
void make(int v)
{
	par[v]=v;
	size[v]=1;
}
int find(int v)
{
	if(v==par[v]) return v;
	return find(par[v]);
}

void Union(int a,int b)
{
	a=find(a);
	b=find(b);
	if(a!=b)
	{
		if(size[a]<size[b]) swap(a,b);
		size[a]+=size[b];
		par[b]=a;
	}
}

void solve()
{
	int n;
	char c;
	string s;
	cin>>n>>c>>s;
	string k=s;
	k+=s;
	int l=0,r=0,ans=0;
	while(l<n and r<2*n)
	{
		if(s[l]==c)
		{
			// r=l;
			if(k[r]=='g')
			{
				ans=max(ans,r-l);
				l++;
			}
			r++;
		}
		else 
		{
			l++;
			r++;
		}
	}
	cout<<ans<<endl;
}
int32_t main()
{
   FAST;
	int t;
	t=1;
	cin>>t;
	while(t--)
	solve();
	khelaSesh;
}
