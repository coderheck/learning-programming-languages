#include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <functional>
#include <chrono>
#include <algorithm>
#include <vector>
using namespace std;
using namespace __gnu_pbds;
#define tname "1734"
#define ll long long 
struct chash {
    const ll RANDOM = (ll)(make_unique<char>().get()) ^ chrono::high_resolution_clock::now().time_since_epoch().count();
    static unsigned ll hash_f(unsigned ll x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    static unsigned ll hash_combine(unsigned ll a, unsigned ll b) {return a*31+b;}
    ll operator()(ll x) const { return hash_f(x)^RANDOM; }
};
template<typename K, typename V>
using umap=gp_hash_table<K,V,chash,equal_to<K>,direct_mask_range_hashing<K>,linear_probe_fn<>,hash_standard_resize_policy<hash_exponential_size_policy<>,hash_load_check_resize_trigger<true>,true>>;
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005;
int n,q,a[maxN],ans[maxN];
umap<int,int>lst;
struct qq{
	int a,b,pos;
	bool operator<(const qq &rhs)const{return b<rhs.b;}
}qs[maxN];
struct seg{
	vector<int>st;
	seg(const int &__sz){st.assign(__sz*4ll+5,0);}
	void upd(int i,int val,int id=1,int l=1,int r=n){
		if(i<l||i>r){return;}
		if(l==r){st[id]=val;return;}
		ll m=(l+r)>>1;
		upd(i,val,id<<1,l,m);upd(i,val,id<<1|1,m+1,r);
		st[id]=st[id<<1]+st[id<<1|1];
	}
	ll que(int u,int v,int id=1,int l=1,int r=n){
		if(u>r||v<l){return 0;}
		if(u<=l&&v>=r){return st[id];}
		ll m=(l+r)>>1;
		return que(u,v,id<<1,l,m)+que(u,v,id<<1|1,m+1,r);
	}
};
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	seg falcon(n);
	// lst.reserve(n+5);
	lst.resize(n+5);
	for(int i=1;i<=n;i++){cin>>a[i];}
	for(int i=1;i<=q;i++){
		cin>>qs[i].a>>qs[i].b;
		qs[i].pos=i;
	}
	sort(qs+1,qs+q+1);
	int pos=1;
	for(int i=1;i<=q;i++){
		while(pos<=qs[i].b){
			if(lst[a[pos]]){falcon.upd(lst[a[pos]],0);}
			lst[a[pos]]=pos;
			falcon.upd(pos,1);
			pos++;
		}
		ans[qs[i].pos]=falcon.que(qs[i].a,qs[i].b);
	}
	for(int i=1;i<=q;i++){lout(ans[i]);}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
