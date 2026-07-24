// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "b"
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
const ll maxN=16,inff=1LL<<62;
ll n,res=0;
void gay(ll n,ll lt,ll rt,ll md){
	if(n==0){return;}
	gay(n-1,lt,md,rt);
	lout(lt<<" "<<rt);
	gay(n-1,md,rt,lt);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	lout((1LL<<n)-1);
	gay(n,1,3,2);
}
