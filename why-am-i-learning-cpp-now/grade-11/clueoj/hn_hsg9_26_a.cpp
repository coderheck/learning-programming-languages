#include <iostream>
using namespace std;
#define tname "hn_hsg9_26_a"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<60;
ll n,k;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	k*=7; n-=k;
	lout((n>=0?n:-1));
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
