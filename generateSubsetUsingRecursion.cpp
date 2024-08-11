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

std::vector<vector<int>> subsets;
void generate(vector<int>&subset,int i,vector<int>&nums)
{
	if(i==nums.size())
	{
		subsets.pb(subset);
		return;
	}
	//not take ith element
	generate(subset,i+1,nums);

	// take ith element
	subset.pb(nums[i]);
	generate(subset,i+1,nums);
	subset.pop_back();

	
}

void solve()
{
	int n;cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	vector<int>empty;
	generate(empty,0,v);
	for(auto subset:subsets)
	{
		for(auto i:subset) cout<<i<<' ';
		cout<<endl; 
	}
	
} 

int32_t main()
{
   FAST;
	int tc;
	tc=1;
	// cin>>tc;
	while(tc--)
	solve();
	khelaSesh;
}
