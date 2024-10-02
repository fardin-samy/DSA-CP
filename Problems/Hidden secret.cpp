// https://lightoj.com/problem/hidden-secret
// A problem of long string and space between multiple strings

// when there is a testcase (number) before strings then don't forget to use : cin.ignore();
// for a long string(with spaces) use getline(cin,string);

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
set<string>st;
void solve(){
	int q;cin>>q;
	cin.ignore();
	for(int tc=1;tc<=q;tc++) {
		std::vector<int> ar(26,0),br(26,0);
		string a,b;
		getline(cin,a);
		getline(cin,b);
		for(int i=0;i<a.size();i++) {
			if(a[i]>='A' and a[i] <= 'Z') ar[a[i]-'A']++;
			if(a[i]>='a' and a[i]<='z') ar[a[i]-'a']++;
		}
		for(int i=0;i<b.size();i++) {
			if(b[i]>='A' and b[i] <= 'Z') br[b[i]-'A']++;
			if(b[i]>='a' and b[i]<='z') br[b[i]-'a']++;
		}
		cout<<"Case ";
		if(ar==br) cout<<tc<<": Yes"<<endl;
		else cout<<tc<<": No"<<endl;
		for(int i=0;i<26;i++) ar[i]=0,br[i]=0;

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
}
