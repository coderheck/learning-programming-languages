// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
// using namespace __gnu_pbds;
#define tname "1641"
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
const ll maxN=5005,inff=1ll<<60;
ll n,x,res=0;
struct p{
	ll a,pos;
	bool operator<(const p &rhs)const{return a<rhs.a;}
}a[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>x;
	for(ll i=1;i<=n;i++){cin>>a[i].a;a[i].pos=i;}
	sort(a+1,a+n+1);
	for(ll i=1,l,r,t,s;i<=n;i++){
		l=1,r=n,t=x-a[i].a;
		while(l!=r){
			s=a[l].a+a[r].a;
			if(l!=i && r!=i && s == t){
				lout(a[l].pos<<" "<<a[i].pos<<" "<<a[r].pos);
				return 0;
			}
			if(s < t){l++;}else{r--;}
		}
	}
	lout("IMPOSSIBLE");
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
