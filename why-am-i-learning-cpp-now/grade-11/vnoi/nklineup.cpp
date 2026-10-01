#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define tname "nklineup"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxn=50005,inff=1ll<<60,LOG=16;
ll txp(const ll &k){return 1ll<<k;}
ll n,q,a[maxn],st_max[LOG+1][maxn],st_min[LOG+1][maxn];
void make_min(){
	for(ll i=1;i<=n;i++){st_min[0][i]=a[i];}
	for(ll e=1;e<=LOG;e++){
		for(ll i=1; i + txp(e) - 1 <= n; i++){
			st_min[e][i]=min(st_min[e-1][i],st_min[e-1][i+txp(e-1)]);
		}
	}
}
void make_max(){
	for(ll i=1;i<=n;i++){st_max[0][i]=a[i];}
	for(ll e=1;e<=LOG;e++){
		for(ll i=1; i + txp(e) - 1 <= n; i++){
			st_max[e][i]=max(st_max[e-1][i],st_max[e-1][i+txp(e-1)]);
		}
	}
}
ll solve(const ll &l,const ll &r){
	ll k=log2(r-l+1);
	return max(st_max[k][l],st_max[k][r - txp(k) + 1]) - min(st_min[k][l],st_min[k][r - txp(k) + 1]);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	make_min();
	make_max();
	while(q--){
		ll L,R;cin>>L>>R;
		lout(solve(L,R));
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
