// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
// using namespace __gnu_pbds;
#define tname "1749"
// #define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxN=200005,inff=1ll<<60;
ll n,a[maxN],st[maxN*4+5];
void cock(ll id=1,ll l=1,ll r=n){}
ll walk(ll id,ll l,ll r,ll val){
	if(l==r){st[id]=0;return l;}
	ll m=(l+r)>>1;
	if(val>st[id<<1]){
		val-=st[id<<1];
		return walk(id<<1|1,m+1,r,val);
	}else{
		return walk(id<<1,l,m,val);
	}
	st[id]=st[id<<1]+st[id<<1|1];
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		cin>>p;
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
