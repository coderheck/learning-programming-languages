// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "migu"
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
ll n,c[maxN][maxN],x[16],cnt[16],res=1LL<<31,cur=0;
void backt(ll id){
	if(id==n){
		res=min(res, cur + c[x[n - 1]][0]);
	}
	for(ll i=1;i<n;i++){
		if(!cnt[i]){
			cnt[i]=1;
			x[id]=i;
			cur+=c[x[id-1]][x[id]];
			backt(id+1);
			cur-=c[x[id-1]][x[id]];
			cnt[i]=0;
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){cin>>c[i][j];}
	}
	backt(1);
	lout(res);
}
