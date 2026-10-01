#include <iostream>
#include <cmath>
using namespace std;
#define tname "1646"
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
void make_sum(){
	for(ll i=1;i<=n;i++){st[0][i]=a[i];}
	for(ll e=1;e<=LOG;e++){
		for(ll i=1;i+txp(e)-1<=n;i++){
			st[e][i]=st[e-1][i]+st[e-1][i+txp(e-1)];
		}
	}
}
ll rsum(ll l,ll r){
	ll k=log2(r-l+1),sum=0;
	for(ll e=k;e>=0;e--){
		if(txp(e) <= r-l+1){ // l + txp(e) - 1 <= r
			sum+=st[e][l];
			l+=txp(e);
		}
	}
	return sum;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	make_sum();
	while(q--){
		ll l,r;cin>>l>>r;
		lout(rsum(l,r));
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = ac
