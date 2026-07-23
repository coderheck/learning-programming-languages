// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "prefixsum_diff_c"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=100005,inff=1LL<<62;
ll n,q,a[maxN],cur,res=-inff;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	res=cur=a[1];
	for(ll i=2;i<=n;i++){
		cur=max(a[i],cur+a[i]);
		res=max(res,cur);
	}
	lout(res);
}

