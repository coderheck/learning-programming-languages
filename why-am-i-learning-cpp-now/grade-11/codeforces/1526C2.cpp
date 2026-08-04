// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <functional>
#include <queue>
#include <vector>
using namespace std;
// using namespace __gnu_pbds;
#define tname "1526C2"
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
const ll maxN=200005;
ll n,a[maxN],res=0;
priority_queue<ll,vector<ll>,greater<ll>>pq;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		res+=a[i];
		pq.push(a[i]);
		while(res<0){res-=pq.top();pq.pop();}
	}
	lout(pq.size());
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
