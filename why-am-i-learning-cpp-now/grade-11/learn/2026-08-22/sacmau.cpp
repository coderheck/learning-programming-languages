// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
#include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// using namespace __gnu_pbds;
#define tname "sacmau"
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
const ll maxN=200005,inff=1ll<<60;
ll n,q,a[maxN];
struct seg{
	vector<ll>st;
	seg(const ll &__sz){st.assign(__sz*4+5,inff);}
	void upd(const ll &i,const ll &val,const ll &id=1,const ll &l=1,const ll &r=n){
		if(i<l||i>r){return;}
		if(l==r){st[id]=val;return;}
		ll m=(l+r)>>1;
		upd(i,val,id<<1,l,m);upd(i,val,id<<1|1,m+1,r);
		st[id]=min(st[id<<1],st[id<<1|1]);
	}
	ll quer(const ll &u,const ll &v,const ll &id=1,const ll &l=1,const ll &r=n){
		if(u>r||v<l||u>v){return inff;}
		if(u<=l&&v>=r){return st[id];}
		ll m=(l+r)>>1;
		return min(quer(u,v,id<<1,l,m),quer(u,v,id<<1|1,m+1,r));
	}
};
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	cin>>q;
	while(q--){
		ll res=0,l,r;
		umap<ll,ll>cnt;
		cin>>l>>r;
		for(ll i=l;i<=r;i++){cnt[a[i]]++;}
		for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
			if(i->second==1){res++;}
		}
		lout(res);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC


