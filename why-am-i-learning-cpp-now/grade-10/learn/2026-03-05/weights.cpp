#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define tname "weights"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1000005,mL=20;
ll n,m,ee,tw=0,up[maxN][mL],id[maxN],dd[maxN],mw[maxN][mL],ans[maxN],par[maxN],sz[maxN];
ll U[maxN],V[maxN],W[maxN];
bool mst[maxN];
struct edge{ll v,w;};
vector<vector<edge>>g(maxN);
ll ffin(const ll &u){
    return(u==par[u]?u:par[u]=ffin(par[u]));
}
void uuni(ll u,ll v){
    u=ffin(u),v=ffin(v);
    if(u==v){return;}
    if(sz[u]<sz[v]){ll t=u;u=v,v=t;}
    par[v]=u,sz[u]+=sz[v];
}
void dfs(const ll &u,const ll &p){
    for(const edge &nx:g[u]){
        ll v=nx.v,w=nx.w;
        if(v==p){continue;}
        dd[v]=dd[u]+1,up[v][0]=u,mw[v][0]=w;
        for(ll e=1;e<ee;e++){
            up[v][e]=up[up[v][e-1]][e-1];
            mw[v][e]=max(mw[v][e-1],mw[up[v][e-1]][e-1]);
        }
        dfs(v,u);
    }
}
ll calc(ll u,ll v){
    if(dd[u]<dd[v]){ll t=u;u=v,v=t;}
    ll ans=0,d=dd[u]-dd[v];
    for(ll e=0;e<ee;e++){
        if((1LL<<e)&d){ans=max(ans,mw[u][e]),u=up[u][e];}
    }
    if(u==v){return ans;}
    for(ll e=ee-1;e>=0;e--){
        if(up[u][e]&&up[u][e]!=up[v][e]){
            ans=max(ans,max(mw[u][e],mw[v][e]));
            u=up[u][e],v=up[v][e];
        }
    }
    ans=max(ans,max(mw[u][0],mw[v][0]));
    return ans;
}
bool cmpfn(const ll &a,const ll &b){return W[a]<W[b];}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;ee=log2(n)+1;
    for(ll i=1;i<=m;i++){
        cin>>U[i]>>V[i]>>W[i];
        id[i]=i;
    }
    for(ll i=1;i<=n;i++){par[i]=i,sz[i]=1;}
    sort(id+1,id+m+1,cmpfn);
    for(ll i=1;i<=m;i++){
        ll e=id[i];
        if(ffin(U[e])!=ffin(V[e])){
            uuni(U[e],V[e]);
            mst[e]=true,tw+=W[e];
            g[U[e]].push_back({V[e],W[e]});
            g[V[e]].push_back({U[e],W[e]});
        }
    }
    dd[1]=0;dfs(1,0);
    for(ll e=1;e<=m;e++){
        ans[e]=(mst[e]?tw:tw-calc(U[e],V[e])+W[e]);
    }
    for(ll e=1;e<=m;e++){lout(ans[e]);}
}
