#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define tname "1647"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<60,LOG=18;
ll txp(const ll &k){return 1ll<<k;}
ll n,q,a[maxn],st[LOG+1][maxn];
void make(){
	// 2^LOG = 2^18 = 262144
	for(ll i=1;i<=n;i++){
		st[0][i]=a[i]; // đoạn bắt đầu từ i có độ dài 2^0 = 1
	}
	for(ll e=1;e<=LOG;e++){
		for(ll i=1; i + txp(e) - 1 <= n; i++){
			st[e][i] = min(
				st[e - 1][i],
				st[e - 1][i + txp(e-1)]
			);
		}
	}
}
ll rmin(const ll &l,const ll &r){
	ll k=log2(r-l+1);
	return min(st[k][l],st[k][r - txp(k) + 1]);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	make();
	while(q--){
		ll L,R;cin>>L>>R;
		lout(rmin(L,R));
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
