// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "a"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,inff=1LL<<62;
ll n,q,a[maxN],st[maxN*4];
void make(ll id,ll l,ll r){
	if(l==r){st[id]=a[l];return;}
	ll m=(l+r)>>1;
	make(id<<1,l,m);make(id<<1|1,m+1,r);
	st[id]=st[id<<1]+st[id<<1|1];
}
void upd(ll id,ll l,ll r,ll i,ll x){
	if(i<l||i>r){return;}
	if(l==r){st[id]=x;return;}
	ll m=(l+r)>>1;
	upd(id<<1,l,m,i,x);upd(id<<1|1,m+1,r,i,x);
	st[id]=st[id<<1]+st[id<<1|1];
}
ll fch(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return 0;}
	if(u<=l&&v>=r){return st[id];}
	ll m=(l+r)>>1;
	return fch(id<<1,l,m,u,v)+fch(id<<1|1,m+1,r,u,v);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	make(1,1,n);
	ll t,a,b;
	while(q--){
		cin>>t>>a>>b;
		if(t==1){upd(1,1,n,a,b);}else{lout(fch(1,1,n,a,b));}
	}
}
