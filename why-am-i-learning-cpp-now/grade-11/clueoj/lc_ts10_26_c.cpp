// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "lc_ts10_26_c"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max_(a,b) ((a)>(b)?(a):(b))
#define min_(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,inff=1LL<<62;
ll n,res=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1,j;i*i<=n;i++){
		if(n%i==0){
			res+=i;
			j=n/i;
			if(i!=j){res+=j;}
		}
	}
	lout((res&1?'S':'M')<<res);
}

