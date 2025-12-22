#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "safenet2"
const ll maxN=30005;
ll n,m,tt=0;
ll num[maxN],low[maxN];
vector<vector<ll>>g(maxN);
// ll par[maxN],sz[maxN];
// void make(const ll &u){par[u]=u,sz[u]=1;}
// ll ffind(const ll &u){return u==par[u]?u:par[u]=ffind(par[u]);}
// void uuni(ll a,ll b){
//     a=ffind(a),b=ffind(b);
//     if(a!=b){
//         if(sz[a]<sz[b]){swap(a,b);}
//         par[b]=a,sz[a]+=sz[b];
//     }
// }
void dfs(const ll &u){
    num[u]=low[u]=++tt;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(ll i=1;i<=n;i++){
        if(!num[i]){dfs(i);}
    }
}
