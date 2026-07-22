// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "snt17"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max_(a,b) ((a)>(b)?(a):(b))
#define min_(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=100005,inff=1LL<<62;
ll n,res=0;
int main(){
	// if(fopen(tname".inp","r")){
	// 	freopen(tname".inp","r",stdin);
	// 	freopen(tname".out","w",stdout);
	// }
	cin>>n;
	while(!(n&1)){n>>=1;res++;}
	for(ll p=3;p*p<=n;p+=2){
		if(n%p==0){
			res++;
			while(n%p==0){n/=p;}
		}
	}
	if(n>1){res++;}
	lout(res);
}
