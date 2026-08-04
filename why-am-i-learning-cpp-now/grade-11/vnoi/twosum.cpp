// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
// using namespace __gnu_pbds;
#define tname "twosum"
// #define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=5005,inff=1ll<<60;
ll n,a[maxN],res=0;
bool bitchsearch(ll l,ll r,ll x){
	ll lt=l,m;
	while(l<=r){
		m=(l+r)>>1;
		if(a[m]-a[lt-1]<x){
			l=m+1;
		}else if(a[m]-a[lt-1]>x){
			r=m-1;
		}else{
			return true;
		}
	}
	return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];a[i]+=a[i-1];}
	for(ll l=1;l<=n;l++){
		for(ll r=l+1;r<=n;r++){
			ll t=a[r]-a[l-1];
			if(t&1){continue;}
			if(bitchsearch(l,r,t>>1)){res=max(res,r-l+1);}
		}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
