//https://codeforces.com/contest/1520/problem/E
//learned: for leveling common elements arrange all the elements toward the middle element
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
	string s;cin>>s;
	if(n==1) {
		cout<<0<<endl;
		return;
	}
	int c=count(all(s),'.');
	if(c==0 or c==n){
		cout<<0<<endl;
		return;
	}
	int cnt=0;
	for(int i=1;i<n;i++){
		if((s[i-1]=='*' and s[i]=='.') or (s[i-1]=='.' and s[i]=='*')){
			cnt++;
		}
	}
	if(cnt==1){
		cout<<0<<endl;
		return;
	}
	c=count(all(s),'*');
	if(c&1){
		int pos;
		int m=c/2+1;
		int x=0;
		for(int i=0;i<n;i++){
			if(s[i]=='*') {
				x++;
				if(x==m){
					pos=i;
					break;
				}
			}
		}
		int ans=0,y=1;
		for(int i=0;i<pos;i++){
			if(s[i]=='*'){
				ans+=(pos-y-i);
				y++;
			}
		}
		y=1;
		for(int i=pos+1;i<n;i++){
			if(s[i]=='*'){
				ans+=(i-pos-y);
				y++;
			}
		}
		cout<<ans<<endl;
	}
	else {
		int pos;
		int m=c/2;
		int x=0;
		for(int i=0;i<n;i++){
			if(s[i]=='*') {
				x++;
				if(x==m) {
					pos=i;
					break;
				}
			}
		}

		int ans=0,y=1;
		for(int i=0;i<pos;i++){
			if(s[i]=='*'){
				ans+=(pos-y-i);
				y++;
			}
		}
		y=1;
		for(int i=pos+1;i<n;i++){
			if(s[i]=='*'){
				ans+=(i-pos-y);
				y++;
			}
		}
		cout<<ans<<endl;
	}
}   
int32_t main(){
   FAST;
    int tc;
    tc=1;
    cin>>tc;
    while(tc--)
    solve();
}
