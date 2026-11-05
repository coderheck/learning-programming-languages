#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define tname "KSXCDX"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	if(s.empty()){lout("0");return 0;}
	s="*"+s+"#&";
	ll n=s.size();
	vector<ll>p(n+5,0);
	ll l=0,r=0;
	for(ll i=1;i<n-1;i++){
		if(i<r){
			ll mirror=l+r-i;
			p[i]=min(r-i,p[mirror]);
		}
		while(s[i+1+p[i]] == s[i-1-p[i]]){p[i]++;}
		if(i+p[i]>r){
			l=i-p[i],r=i+p[i];
		}
	}
	ll res=1;
	for(ll i=1;i<n-1;i++){
		if(p[i]>res){res=p[i];}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
