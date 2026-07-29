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
// #define max(a,b) ((a)>(b)?(a):(b))
// #define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,modN=1000000007;
struct node{
	ll sum=0,add=0,set=-1;
}st[maxN*4];
ll n,m,t,u,v,x,a[maxN];
void build(ll id,ll l,ll r){
	if(l==r){st[id].sum=a[l];return;}
	ll m=(l+r)>>1;
	build(id<<1,l,m);build(id<<1|1,m+1,r);
	st[id].sum=(st[id<<1].sum+st[id<<1|1].sum);
}
void psh(ll id,ll l,ll r){
	if(st[id].set!=-1){
		st[id].sum=((r-l+1)*st[id].set);
		if(l!=r){
			st[id<<1].set=st[id<<1|1].set=st[id].set;
			st[id<<1].add=st[id<<1|1].add=0;
		}
		st[id].set=-1;
	}
	if(st[id].add){
		st[id].sum=(st[id].sum+(r-l+1)*st[id].add);
		if(l!=r){
			if(st[id<<1].set!=-1){
				st[id<<1].set=(st[id<<1].set+st[id].add);
			}else{
				st[id<<1].add=(st[id<<1].add+st[id].add);
			}
			if(st[id<<1|1].set!=-1){
				st[id<<1|1].set=(st[id<<1|1].set+st[id].add);
			}else{
				st[id<<1|1].add=(st[id<<1|1].add+st[id].add);
			}
		}
		st[id].add=0;
	}
}
void upd(ll id,ll l,ll r,ll u,ll v,ll t,ll val){
	psh(id,l,r);
	if(u>r||v<l){return;}
	if(u<=l&&v>=r){
		if(t==1){
			st[id].add=val;
		}else if(t==2){
			st[id].set=val;
		}
		psh(id,l,r);
		return;
	}
	if(l==r){return;}
	ll m=(l+r)>>1;
	upd(id<<1,l,m,u,v,t,val);upd(id<<1|1,m+1,r,u,v,t,val);
	st[id].sum=(st[id<<1].sum+st[id<<1|1].sum);
}
ll fetch(ll id,ll l,ll r,ll u,ll v){
	psh(id,l,r);
	if(u>r||v<l){return 0;}
	if(u<=l&&v>=r){return st[id].sum;}
	if(l==r){return st[id].sum;}
	ll m=(l+r)>>1;
	return (fetch(id<<1,l,m,u,v)+fetch(id<<1|1,m+1,r,u,v));
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	build(1,1,n);
	while(m--){
		cin>>t>>u>>v;
		if(t==3){
			lout(fetch(1,1,n,u,v));
		}else{
			cin>>x;
			upd(1,1,n,u,v,t,x);
		}
	}
}
