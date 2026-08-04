#include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <utility>
using namespace std;
using namespace __gnu_pbds;
#define tname "PCSKREAA"
#define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxN=200005,inff=1ll<<60;
ll cycle(const ll& n1){
	ll c=1,n=n1;
	while(n!=1){
		if(n&1){n=n*3+1;}else{n>>=1;}
		c++;
	}
	return c;
}
ll i,j,m,n,r=0;
umap<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	for(ll i=1;i<=1000000;i++){
		cnt[i]=cycle(i);
	}
	// for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
	// 	cout<<i->first<<" "<<i->second<<"\n";
	// }
	while(cin>>i>>j){
		r=-1;
		m=i,n=j;if(m>n){swap(m,n);}
		for(ll k=m;k<=n;k++){
			if(r<cnt[k]){r=cnt[k];}
		}
		lout(i<<" "<<j<<" "<<r);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
