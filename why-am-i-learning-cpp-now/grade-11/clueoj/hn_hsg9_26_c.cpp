#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
#define tname "hn_hsg9_26_c"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=100005,inff=1ll<<60;
string s;
ll q,n,st[maxn*4];
ll dist(const ll &l,const ll &r){
	ll d=abs(s[r]-s[l]);
	return min(d,26-d);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s>>q;n=s.size();s="#"+s;
	for(ll qq=1,l,r,d=0;qq<=q;qq++){
		cin>>l>>r;d=0;
		for(ll i=l;i<=r;i++){
			for(ll j=i;j<=r;j++){d=max(d,dist(i,j));}
		}
		lout(d);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

