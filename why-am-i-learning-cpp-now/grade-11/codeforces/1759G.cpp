// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <set>
#include <vector>
using namespace std;
// using namespace __gnu_pbds;
#define tname "1759G"
// #define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<"";\
	// cerr<<x<<" ";
const ll maxN=200005;
ll t,n,a[maxN],res=0;
void solve(){
	cin>>n;
	vector<bool>vis(maxN,false);
	bool ok=true;
	for(ll i=1;i<=n/2;i++){
		cin>>a[i];
		if(vis[a[i]]){ok=false;}
		vis[a[i]]=true;
	}
	if(!ok){cout<<"-1\n";return;}
	set<ll>s;
	for(ll i=1;i<=n;i++){
		if(!vis[i]){s.insert(i);}
	}
	vector<ll>b(n+5);
	for(ll i=n/2;i>=1;i--){
		auto it=s.lower_bound(a[i]);
		if(it==s.begin()){cout<<"-1\n";return;}
		it--;
		b[i*2]=a[i];
		b[i*2-1]=*it;
		s.erase(it);
	}
	for(ll i=1;i<=n;i++){cout<<b[i]<<" ";}
	cout<<"\n";
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		solve();
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

