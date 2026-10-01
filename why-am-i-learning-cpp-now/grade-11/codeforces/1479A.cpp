#include <iostream>
using namespace std;
#define tname "1479a"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<60;
ll n,a[maxn];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	a[0]=a[n+1]=inff;
	// bitchsearch:
	// neu f(L) * f(mid) < 0 => ton tai cuc tieu trong (L; mid)
	// neu 
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
