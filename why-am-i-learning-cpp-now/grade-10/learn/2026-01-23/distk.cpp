#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "distk"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=50005;
ll n,k,res=0,a[maxN],dp[maxN][205];
// dp[i][k]: số đỉnh cách k cạnh với đỉnh i 
vector<vector<ll>>g(maxN);
void dfs(const ll &u,const ll &p){
	dp[u][0]=1; // u cách chính nó 0 cạnh
	for(const ll &v:g[u]){
		if(v==p){continue;}
		dfs(v,u);
		for(ll i=0;i<k;i++){
			ll j=k-i-1;
			if(j>=0){
				// ghép cặp giữa cây con của v và các nhánh của u
				res+=dp[u][i]*dp[v][j];
			}
		}
		for(ll i=0;i+1<=k;i++){
			// gộp dp[v] vào dp[u]
			dp[u][i+1]+=dp[v][i];
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	// for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		ll p;cin>>p;
		if(!p){continue;}
		g[p].push_back(i);
		g[i].push_back(p);
	}
	dfs(1,0);
	lout(res);
}
