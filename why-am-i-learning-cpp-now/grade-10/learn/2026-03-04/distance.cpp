#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
#define tname "distance"
#define ll long long
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1000005,mL=20;
ll n,Q,ee=1,up[maxN][mL],dd[maxN];
vector<vector<ll>>g(maxN);
void init(){
    queue<ll>q;q.push(1);
    dd[1]=0;
    while(q.size()){
        ll u=q.front();q.pop();
        for(const ll &v:g[u]){
            if(dd[v]!=-1){continue;}
            dd[v]=dd[u]+1,up[v][0]=u;
            for(ll e=1;e<ee;e++){
                if(up[v][e-1]!=-1){
                    up[v][e]=up[up[v][e-1]][e-1];
                }
            }
            q.push(v);
        }
    }
}
ll solve(const ll &_u,const ll &_v){
    ll lca,u=_u,v=_v;
    if(dd[u]<dd[v]){u=_v,v=_u;}
    for(ll e=ee-1;e>=0;e--){
        if(up[u][e]!=-1&&dd[up[u][e]]>=dd[v]){
            u=up[u][e];
        }
    }
    if(u==v){lca=u;}else{
        for(ll e=ee-1;e>=0;e--){
            if(up[u][e]!=-1&&up[u][e]!=up[v][e]){
                u=up[u][e],v=up[v][e];
            }
        }
        lca=up[u][0];
    }
    return dd[_u]+dd[_v]-(dd[lca]*2);
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;ee=log2(n)+1;
    for(ll i=1;i<=n;i++){
        dd[i]=-1;
        for(ll e=0;e<ee;e++){up[i][e]=-1;}
    }
    for(ll i=2,u,v;i<=n;i++){
        cin>>u>>v;
        g[u].push_back(v),g[v].push_back(u);
    }
    init();
    cin>>Q;
    for(ll i=1,u,v;i<=Q;i++){
        cin>>u>>v;
        lout(solve(u,v));
    }
}
