#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "thhv25_dx12_10_a"
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
const ll maxN=200005,maxP=1000000,inff=1LL<<62;
ll n,a[maxN],dp[maxN];
umap<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
    for(int i=1;i<=n;i++){cin>>a[i];}
    for(int i=1,l;i<=n;i++){
        cnt[i]=dp[i]=dp[i-1];
        if(a[i]<=i){
            l=i-a[i]+1;
            cnt[l]++,dp[i]=max(dp[i],cnt[l]);
        }
    }
    lout(n-dp[n]);
}
