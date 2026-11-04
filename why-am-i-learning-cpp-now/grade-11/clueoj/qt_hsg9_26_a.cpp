#include <iostream>
#include <cmath>
using namespace std;
#define tname "qt_hsg9_26_a"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll a,b,res=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
	ll l=sqrt(a);if(l*l!=a){l++;}
	for(ll i=l;i*i<=b;i++){res++;}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
