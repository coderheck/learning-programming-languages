// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "lc_ts10_26_e"
// #define umap __gnu_pbds::gp_hash_table
#define umap unordered_map
#define ll long long
#define max_(a,b) ((a)>(b)?(a):(b))
#define min_(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=1000005,inff=1LL<<62;
bool ispl(ll n){
	ll rr=0,r1=n;
	while(n){rr=rr*10+n%10;n/=10;}
	return rr==r1;
}
ll n,k,a[maxN],le=0,res=0;
umap<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){a[i]=ispl(a[i]);}
	cnt[0]=1;
	cnt.reserve(maxN);
	for(ll i=1;i<=n;i++){
		if(a[i]&1){le++;}
		res+=cnt[le-k];
		cnt[le]++;
	}
	lout(res);
}
