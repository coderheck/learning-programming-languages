#include <iostream>
#include <cmath>
using namespace std;
#define tname "gcdlr"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxn=300005,inff=1ll<<60,LOG=19;
ll txp(const ll &k){return 1ll<<k;}
ll gcd(const ll &a,const ll &b){return b?gcd(b,a%b):a;}
ll n,q,a[maxn],st[LOG+1][maxn];
void make_gcd(){
	for(ll i=1;i<=n;i++){st[0][i]=a[i];}
	for(ll e=1;e<=LOG;e++){
		for(ll i=1;i+txp(e)-1<=n;i++){
			st[e][i]=gcd(st[e-1][i],st[e-1][i+txp(e-1)]);
		}
	}
}
ll rgcd(const ll &l,const ll &r){
	ll k=log2(r-l+1);
	return gcd(st[k][l],st[k][r-txp(k)+1]);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	// make_gcd();
	while(q--){
		ll l,r;cin>>l>>r;
		lout(rgcd(l,r));
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = ac
