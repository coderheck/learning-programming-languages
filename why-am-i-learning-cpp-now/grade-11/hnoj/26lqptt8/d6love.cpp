// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
// using namespace __gnu_pbds;
#define tname "d6love"
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
const ll maxN=200005;
ll n,d,s,a[maxN];
struct ij{ll i,j;};
vector<ij>res;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>d>>s;
	if(n<=20){
		// sub 1: bitmask với bit thứ i là trạng thái chọn người thứ i
		for(ll i=0;i<n;i++){cin>>a[i];}
		vector<bool>mark(n,false);
		ll maxmask=(1ll<<n)+1;
		for(ll mask=1;mask<maxmask;mask++){ // duyệt i=0 -> i=n
			ll u=-1,v=-1;
			bool ok=true;
			for(ll i=0;i<n;i++){
				if(mask&(1ll<<i)){
					if(u==-1){u=i;}else if(v==-1){v=i;}else{ok=false;break;}
				}
			}
			if(not ok or u==-1 or v==-1){continue;}
			if(mark[u] or mark[v]){continue;}
			if(abs(a[u]-a[v])==d or a[u]+a[v]==s){
				mark[u]=mark[v]=true;res.push_back({u,v});
			}
		}
		if((ll)res.size()!=n/2){lout("-1");return 0;}
		for(const ij &x:res){lout(x.i+1<<" "<<x.j+1);}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
