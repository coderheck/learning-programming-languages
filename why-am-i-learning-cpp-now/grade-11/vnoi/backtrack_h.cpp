// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "backtrack_h"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=1e18,inff=1LL<<62;
const ll p[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
ll n,res=0,t;
void backt(ll i,ll maxE,ll val,ll numdiv){
	res=max(res,numdiv);
	if(i==16){return;}
	for(ll d=1;d<=maxE;d++){
		if(n/p[i]<val){return;}
		val*=p[i];
		backt(i+1,d,val,numdiv*(d+1));
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		res=-1;
		cin>>n;
		backt(0,64,1,1);
		lout(res);
	}
}
