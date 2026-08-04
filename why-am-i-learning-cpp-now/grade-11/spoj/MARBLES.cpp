// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
// using namespace __gnu_pbds;
#define tname "MARBLES"
#define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<"";\
	// cerr<<x<<" ";
const ll maxN=1000005,modN=1000000007;
ll t,n,k,f[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n>>k;
		ll res=1;
		if(n-k<=k-1){k=n-k+1;}
		for(ll i=1;i<k;i++){
			res=res*(n-i)/i;
		}
		lout(res);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
