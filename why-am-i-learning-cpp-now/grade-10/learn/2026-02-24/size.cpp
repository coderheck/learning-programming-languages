#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "size"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=100005;
vector<vector<ll>>g(maxN);
ll n,dp[maxN];
void dfs(const ll &u,const ll &p){
    dp[u]=1;
    for(const ll &v:g[u]){
        if(v!=p){dfs(v,u);dp[u]+=dp[v];}
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<n;i++){
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,-1);
    for(ll i=1;i<=n;i++){lout(dp[i]);}
}
