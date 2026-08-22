// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
#include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
// using namespace __gnu_pbds;
#define tname "NDSDB"
// #define umap gp_hash_table
#define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=1000005;
ll n,a[maxN],p[maxN],pz=0;
umap<ll,ll>cnt;
int main(){
	// if(fopen(tname".inp","r")){
	// 	freopen(tname".inp","r",stdin);
	// 	freopen(tname".out","w",stdout);
	// }
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	// cnt.resize(10000000);
	for(ll i=1;i<=n;i++){cin>>a[i];cnt[a[i]]++;}
	for(ll i=1;i<=n;i++){
		if(cnt[a[i]]==1){p[pz++]=a[i];}
	}
	if(!pz){lout("-1");return 0;}
	lout(pz);
	for(ll i=0;i<pz;i++){lout(p[i]);}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

