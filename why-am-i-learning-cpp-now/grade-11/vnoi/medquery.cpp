#include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
#include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
using namespace __gnu_pbds;
#define tname "medquery"
#define umap gp_hash_table
// #define umap unordered_map
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxN=200005,inff=1LL<<62;
ll q;
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
		if(t=='+'){
			os.insert(x);
		}else{
			os.erase(x);
		}
		if(os.size()){
			lout(*os.find_by_order((os.size()-1)>>1));
		}
	}
}

