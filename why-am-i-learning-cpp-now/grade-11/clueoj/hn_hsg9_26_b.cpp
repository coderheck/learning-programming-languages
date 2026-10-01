#include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <functional>
#include <chrono>
using namespace std;
using namespace __gnu_pbds;
#define tname "hn_hsg9_26_b"
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
const ll maxn=200005,inff=1ll<<60;
ll n,k,a[maxn],res=0;
umap<ll,bool>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		cnt[a[i]]=true;
	}
	for(ll i=1;i<=n;i++){
		if(
			cnt.find(a[i]-k)!=cnt.end()
			and cnt.find(a[i]-k)!=cnt.end()
			and cnt[a[i]-k] == true
			and cnt[a[i]+k] == true
		){res++;}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

