// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <algorithm>
#include <iostream>
using namespace std;
// using namespace __gnu_pbds;
#define tname "lis"
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
const ll maxN=1005;
ll n,a[maxN],lis[maxN],lz=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	lis[lz++]=a[1];
	for(ll i=2;i<=n;i++){
		ll pos=lower_bound(lis,lis+lz,a[i])-lis;
		lis[(pos<lz ? pos : lz++)]=a[i];
	}
	lout(lz);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
