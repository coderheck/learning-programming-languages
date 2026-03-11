#include <iostream>
#include <vector>
using namespace std;
#define tname "bwtree"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=200005;
ll n,sum=0,res[maxN],a[maxN],dp[maxN];
// dp[u] = tổng lớn nhất của cây con chứa u trong subtree u
vector<vector<ll>>g(maxN);
void init(const ll &u,const ll &p){
    dp[u]=a[u];
    for(const ll &v:g[u]){
        if(v==p){continue;}
        init(v,u);
        if(dp[v]>0){dp[u]+=dp[v];}
    }
}
void reroot(const ll &u,const ll &p){
    res[u]=dp[u];
    for(const ll &v:g[u]){
        if(v==p){continue;}
        ll pu=dp[u],pv=dp[v];
        if(dp[v]>0){dp[u]-=dp[v];}
        if(dp[u]>0){dp[v]+=dp[u];}
        reroot(v,u);
        dp[u]=pu,dp[v]=pv;
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];if(!a[i]){a[i]=-1;}}
    for(ll i=2,u,v;i<=n;i++){
        cin>>u>>v;
        g[u].push_back(v),g[v].push_back(u);
    }
    init(1,-1);reroot(1,-1);
    for(ll i=1;i<=n;i++){lout(res[i]);}
}
