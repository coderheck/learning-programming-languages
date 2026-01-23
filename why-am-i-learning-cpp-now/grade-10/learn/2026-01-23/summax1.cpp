#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "summax1"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=200005;
ll n,a[maxN],root=0,dp[maxN];
vector<vector<ll>>chi(maxN);
void dfs(const ll &u){
	for(const ll &v:chi[u]){
		dp[v]=dp[u]+a[v];
		dfs(v);
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
		if(!p){root=i;}else{chi[p].push_back(i);}
		// g[p].push_back(i);
	}
	dp[root]=a[root];
	dfs(root);
	ll res=0;
	for(ll i=1;i<=n;i++){res=max(res,dp[i]);}
	lout(res);
}
