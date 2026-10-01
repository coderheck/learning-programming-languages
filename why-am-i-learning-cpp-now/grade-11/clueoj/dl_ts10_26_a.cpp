#include <iostream>
using namespace std;
#define tname "dl_ts10_26_a"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<60;
ll l,r;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>l>>r;
	l+=(l&1),r-=(r&1);
	ll ssh=((r-l)>>1)+1;
	lout((((r+l)*ssh)>>1));
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

