// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
#define tname "d"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=1000005,inff=1LL<<62;
ll n,m,res=0,a[maxN],sum[maxN];
ll cntp(ll x){
	ll r=0;
	for(ll i=1;i<=n;i++){
		ll pos=lower_bound(a+1,a+n+1,x-a[i])-a;
		r+=n-pos+1;
	}
	return r;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++){sum[i]=sum[i-1]+a[i];}
	ll l=2,r=200000,mid,tt=2;
	while(l<=r){
		mid=(l+r)>>1;
		if(cntp(mid)>=m){tt=mid;l=mid+1;}else{r=mid-1;}
	}
	ll ch=0,sh=0;
	for(ll i=1;i<=n;i++){
		ll	pos=lower_bound(a+1,a+n+1,(tt+1)-a[i])-a,
			cnt=n-pos+1;
		ch+=cnt;
		sh+=cnt*a[i]+(sum[n]-sum[pos-1]);
	}
	lout(sh+(m-ch)*tt);
}
