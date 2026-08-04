#include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
using namespace __gnu_pbds;
#define tname "1646C"
#define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<"";\
	// cerr<<x<<" ";
const ll maxN=200005,inff=1ll<<60,maxmask=1ll<<15;
ll t,x,ps[]={1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200},res=inff;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>x;
		res=inff;
		ll maxmask=1ll<<15;
		for(ll mask=0;mask<maxmask;mask++){
			ll t=0,r=0,c=0;
			for(ll i=0;i<15;i++){
				if(mask & (1ll<<i)){t+=ps[i];c++;}
			}
			r=x-t;
			c+=__builtin_popcountll(r);
			res=min(res,c);
		}
		if(res==inff){lout("-1");}else{lout(res);}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
//
// n - tong bitmask = 25 = 2^4 + 2^3 + 2^0
// 11001
