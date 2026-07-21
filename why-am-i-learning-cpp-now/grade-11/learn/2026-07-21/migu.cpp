// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <cstring>
using namespace std;
#define tname "migu"
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
ll t,n,res=0,a[maxN],pos[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n;
		memset(pos,0,sizeof pos);
		res=0;
		for(ll i=1,a;i<=n;i++){cin>>a;pos[a]=i;}
		for(ll x=1;x<=n*2;x++){
			if(!pos[x]){continue;}
			for(ll y=x+1;x*y<=n*2;y++){
				if(!pos[y]){continue;}
				if(pos[x]+pos[y]==x*y){res++;}
			}
		}
		lout(res);
	}
}
