#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "token"
#define lout(x) cout<<(x)<<" ";cerr<<(x)<<" ";
const ll maxN=200005;
ll n,dp[maxN],sz[maxN];
vector<vector<ll>>g(maxN);
void dfs(const ll &u,const ll &p){
    dp[u]=sz[u]=1;
    for(const ll &v:g[u]){
        if(v!=p){
            dfs(v,u);
            dp[u]+=dp[v]+sz[v],
            sz[u]+=sz[v];
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
    for(ll i=2;i<=n;i++){
        ll u;cin>>u;
        g[u].push_back(i);
        g[i].push_back(u);
    }
    dfs(1,-1);
    for(ll i=1;i<=n;i++){lout(dp[i]);}
}
