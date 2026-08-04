// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
// using namespace __gnu_pbds;
#define tname "2206"
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
const ll maxN=200005,inff=1LL<<60;
int L[maxN],R[maxN],n,q,t,k,x;
struct seg{
	ll st[maxN*4];
	void make(int val[],int id=1,int l=1,int r=n){
		if(l>r){return;}
		if(l==r){st[id]=val[l];return;}
		int m=(l+r)>>1;
		make(val,id<<1,l,m);make(val,id<<1|1,m+1,r);
		st[id]=min(st[id<<1],st[id<<1|1]);
	}
	void upd(int i,int x,int id=1,int l=1,int r=n){
		if(l>r){return;}
		if(l==r){st[id]=x;return;}
		int m=(l+r)>>1;
		if(i<=m){
			upd(i,x,id<<1,l,m);
		}else{
			upd(i,x,id<<1|1,m+1,r);
		}
		st[id]=min(st[id<<1],st[id<<1|1]);
	}
	ll fch(int u,int v,int id=1,int l=1,int r=n){
		if(l>r||u>r||v<l){return inff;}
		if(u<=l&&v>=r){return st[id];}
		int m=(l+r)>>1;
		return min(fch(u,v,id<<1,l,m),fch(u,v,id<<1|1,m+1,r));
	}
};
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	ll a;
	for(int i=1;i<=n;i++){
		cin>>a;
		L[i]=a-i,R[i]=a+i;
	}
	seg ltt,rtt;
	ltt.make(L);rtt.make(R);
	while(q--){
		cin>>t>>k;
		if(t==1){
			cin>>x;
			ltt.upd(k,x-k);rtt.upd(k,x+k);
		}else{
			lout(min(ltt.fch(1,k) + k,rtt.fch(k,n) - k));
		}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
