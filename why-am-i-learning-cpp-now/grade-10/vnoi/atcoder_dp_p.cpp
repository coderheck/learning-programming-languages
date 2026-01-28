#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "atcoder_dp_p"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=100005,modN=1000000007;
ll n,a[maxN],dp[maxN][2];
// dp[v][0]: không chọn đỉnh v; dp[v][1]: chọn đỉnh v
vector<vector<ll>>g(maxN);
void dfs(const ll &u,const ll &p){
	dp[u][0]=dp[u][1]=1;
	for(const ll &v:g[u]){
		if(v==p){continue;}
		dfs(v,u);
		dp[u][0]=((dp[u][0]%modN)*(dp[v][1]%modN))%modN;
		dp[u][1]=((dp[u][1]%modN)*(dp[v][0]%modN+dp[v][1]%modN)%modN)%modN;
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	// for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=2;i<=n;i++){
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1,0);
	lout((dp[1][0]%modN+dp[1][1]%modN)%modN);
}
