#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "summax3"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=200005;
ll n,a[maxN],dp[maxN][2];
// dp[v][0]: không chọn đỉnh v; dp[v][1]: chọn đỉnh v
vector<vector<ll>>g(maxN);
void dfs(const ll &u,const ll &p){
	dp[u][0]=0,dp[u][1]=a[u];
	for(const ll &v:g[u]){
		if(v==p){continue;}
		dfs(v,u);
		dp[u][0]+=dp[v][1];
		dp[u][1]+=min(dp[v][0],dp[v][1]);
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		ll p;cin>>p;
		g[p].push_back(i);
		g[i].push_back(p);
	}
	dfs(1,0);
	lout(min(dp[1][0],dp[1][1]));
}

