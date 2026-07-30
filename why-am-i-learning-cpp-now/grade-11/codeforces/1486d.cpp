// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "1486d"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,inff=1LL<<62;
ll n,k,res=0,a[maxN];
bool check(const ll &x){
	ll p[maxN]={0};
	for(ll i=1;i<=n;i++){p[i]=p[i-1]+(a[i]>=x?1:-1);}
	ll minn=0;
	for(ll r=k;r<=n;r++){
		minn=min(minn,p[r-k]);
		if(p[r]-minn>0){return true;}
	}
	return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	ll l=1,r=n,m;
	while(l<=r){
		m=(l+r)>>1;
		if(check(m)){res=m;l=m+1;}else{r=m-1;}
	}
	lout(res);
}
