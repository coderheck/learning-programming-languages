#include <iostream>
#include <vector>
using namespace std;
#define tname "dfroot"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=1000005;
ll n,sum=0,d[maxN],s[maxN],dp[maxN];
vector<vector<ll>>g(maxN);
void dfs(const ll &u,const ll &p,const ll &dist){
    sum+=dist;
    for(const ll &v:g[u]){
        if(v==p){continue;}
        dfs(v,u,dist+1);
    }
}
void init(const ll &u,const ll &p,const ll &dd){
    dp[1]+=dd,s[u]=1;
    for(const ll &v:g[u]){
        if(v==p){continue;}
        init(v,u,dd+1);
        s[u]+=s[v];
    }
}
void reroot(const ll &u,const ll &p){
    for(const ll &v:g[u]){
        if(v==p){continue;}
        dp[v]=dp[u]+n-s[v]*2;
        reroot(v,u);
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=2,u,v;i<=n;i++){
        cin>>u>>v;
        g[u].push_back(v),g[v].push_back(u);
    }
    /* --- sub 1 ---
    for(ll i=1;i<=n;i++){
        sum=0;
        dfs(i,-1,0);
        lout(sum);
    }
    */
    init(1,-1,0);reroot(1,-1);
    for(ll u=1;u<=n;u++){lout(dp[u]);}
}
