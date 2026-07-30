#include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
#include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
using namespace __gnu_pbds;
#define tname "c"
#define umap gp_hash_table
// #define umap unordered_map
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxN=200005,inff=1LL<<62;
ll q;
// ll st[maxN*4];
// void upd(ll id,ll l,ll r,ll i,ll x){
// 	if(i<l||i>r){return;}
// 	if(l==r){st[id]=x;return;}
// 	ll m=(l+r)>>1;
// 	upd(id<<1,l,m,i,x);upd(id<<1|1,m+1,r,i,x);
// 	st[id]=st[id<<1]+st[id<<1|1];
// }
// ll fch(ll id,ll l,ll r,ll u,ll v){
// 	if(u>r||v<l){return 0;}
// 	if(u<=l&&v>=r){return st[id];}
// 	ll m=(l+r)>>1;
// 	return fch(id<<1,l,m,u,v)+fch(id<<1|1,m+1,r,u,v);
// }
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>q;
	ll x;char t;
	ordered_set os;
	while(q--){
		cin>>t>>x;
		if(t=='I'){
			os.insert(x);
		}else if(t=='D'){
			os.erase(x);
		}else if(t=='K'){
			auto it=os.find_by_order(x-1);
			if(it!=os.end()){
				lout(*it);
			}else{
				lout("invalid");
			}
		}else if(t=='C'){
			lout(os.order_of_key(x));
		}
	}
}
