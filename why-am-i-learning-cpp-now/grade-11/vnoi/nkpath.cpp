// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
// using namespace __gnu_pbds;
#define tname "nkpath"
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
const ll maxN=105,modN=1000000000;
ll gcd(const ll &a,const ll &b){return b?gcd(b,a%b):a;}
ll n,m,res=0,a[maxN][maxN],dp[maxN][maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){cin>>a[i][j];}
	}
	// for(ll i=1;i<=m;i++){dp[i][1]=1;}
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){
			for(ll u=1;u<=i;u++){
				for(ll v=1;v<=j;v++){
					if(v==j&&j==n){continue;}
					if(u+v<i+j&&gcd(a[i][j],a[u][v])>1){
						dp[i][j]=(dp[i][j]+dp[u][v])%modN;
					}
				}
			}
			if(j==1){dp[i][j]=(dp[i][j]+1)%modN;}
			if(j==n){res=(res+dp[i][j])%modN;}
		}
	}
	// for(ll i=1;i<=m;i++){res=(res+dp[i][n])%modN;}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
