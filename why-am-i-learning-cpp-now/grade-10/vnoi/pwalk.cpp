#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "pwalk"
const ll maxN=100005,maxLog=17; // 2^17 = 131072 >= maxN
struct edge{ll v,w;};
ll n,q,up[maxN][maxLog+1],depth[maxN],len[maxN];
vector<vector<edge>>g(maxN);
void dfs(ll u,ll p,ll w){
    len[u]=len[p]+w,depth[u]=depth[p]+1,up[u][0]=p;
    for(int i=1;i<maxLog;i++){
        up[u][i]=up[up[u][i-1]][i-1];
    }
    for(const edge &nx:g[u]) {
        if(nx.v!=p){dfs(nx.v,u,nx.w);}
    }
}
ll lca(ll u,ll v) {
    if(depth[u]<depth[v]){swap(u,v);}
    for(int i=maxLog;i>=0;i--){
        if(depth[up[u][i]]>=depth[v]){
            u=up[u][i];
        }
    }
    if(u==v){return u;}
    for(ll i=maxLog;i>=0;i--){
        if(up[u][i]!=up[v][i]) {
            u=up[u][i],v=up[v][i];
        }
    }
    return up[u][0];
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin>>n>>q;
    for(ll i=1;i<n;i++) {
        ll u,v,w;cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dfs(1,0,0);
    while(q--) {
        ll u,v,anc;cin>>u>>v;
        anc=lca(u,v);
        // cout<<len[u]+len[v]-2*len[anc]+depth[u]+depth[v]-2*depth[anc]+1<<"\n";
		cout<<len[u]+len[v]-2*len[anc]<<"\n";
    }
}
