#include <iostream>
#include <utility>
using namespace std;
#define ll long long
#define tname "dsu_e"
const ll maxN=50005;
ll n,m,k,par[maxN],sz[maxN];
bool vis[maxN];
void mmake(const ll &u){par[u]=u,sz[u]=1;}
ll ffind(const ll &u){return u==par[u]?u:par[u]=ffind(par[u]);}
void uuni(ll a,ll b){
    a=ffind(a),b=ffind(b);
    if(a==b){return;}
    if(sz[a]<sz[b]){swap(a,b);}
    par[b]=a,sz[a]+=sz[b];
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin>>n>>m>>k;
    for(ll i=1;i<=n;i++){mmake(i);}
    for(ll i=1;i<=m;i++){
        ll u,v;cin>>u>>v;
        uuni(u,v);
    }
    for(ll i=1;i<=n;i++){
        if(!vis[i]){}
    }
}
