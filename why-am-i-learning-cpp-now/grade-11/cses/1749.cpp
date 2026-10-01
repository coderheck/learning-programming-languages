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
ll n,a[maxN],bit[maxN];
void upd(ll pos,ll val){
	for(;pos<=maxN;pos+=(pos&-pos)){bit[pos]+=val;}
}
ll get(ll pos){
	ll sum=0;
	while(pos>0){sum+=bit[pos];pos-=(pos&-pos);}
	return sum;
}
ll bitchsearch(ll l,ll r,ll p){
	ll ass=l;
	while(l<=r){
		ll m=(l+r)>>1;
		if(get(m)>=p){ass=m;r=m-1;}else{l=m+1;}
	}
	return ass;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];upd(i,1);}
	for(ll i=1,pos,p;i<=n;i++){
		cin>>p;
		pos=bitchsearch(1,n,p);
		oout(a[pos]);
		upd(pos,-1);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
