// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
// using namespace __gnu_pbds;
#define tname "e"
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
const ll maxN=200005,inff=1ll<<60;
ll t,n,a[maxN],pos[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n;
		for(ll i=1;i<=n;i++){cin>>a[i];pos[a[i]]=i;}
		ll res=0,x=-1,mx=0,mi=inff;
		for(ll i=1;i<=n;i++){
			if(i&1){
				x++;
				mx=max(mx,pos[x]);
				mi=min(mi,pos[x]);
			}
			if(mx-mi+1<=i){
				ll	l=max(1ll,mx-i+1),
					r=min(mi,n-i+1);
				res+=r-l+1;
			}
		}
		lout(res);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

