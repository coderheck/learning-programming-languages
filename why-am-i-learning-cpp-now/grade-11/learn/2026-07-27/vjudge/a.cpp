// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "a"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,inff=1LL<<62;
ll n,k,res=0,a[maxN],l=1,r=0,m;
bool check(const ll &sum){
	ll c=1,s=0;
	for(ll i=1;i<=n;i++){
		if(a[i]>sum){return false;}
		if(a[i]+s>sum){c++;s=0;}
		s+=a[i];
	}
	return c<=k;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];r+=a[i];l=max(l,a[i]);}
	while(l<=r){
		m=(l+r)/2;
		if(check(m)){r=m-1;res=m;}else{l=m+1;}
	}
	lout(res);
}

