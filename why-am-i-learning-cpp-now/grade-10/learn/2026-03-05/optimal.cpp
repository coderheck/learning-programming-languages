#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
#define tname "optimal"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1000005,mL=20;
ll n,Q,ee=1,up[maxN][mL],dd[maxN],mw[maxN][mL];
struct edge{ll v,w;};
vector<vector<edge>>g(maxN);
void init(){
    queue<ll>q;q.push(1);
    dd[1]=0;
    while(q.size()){
        ll u=q.front();q.pop();
        for(const edge &nx:g[u]){
            ll v=nx.v,w=nx.w;
            if(dd[v]!=-1){continue;}
            dd[v]=dd[u]+1,up[v][0]=u,mw[v][0]=w;
            for(ll e=1;e<ee;e++){
                if(up[v][e-1]!=-1){
                    up[v][e]=up[up[v][e-1]][e-1];
                    mw[v][e]=max(mw[v][e-1],mw[up[v][e-1]][e-1]);
                }
            }
            q.push(v);
        }
    }
}
void solve(ll u,ll v,const ll &w){
    if(dd[u]<dd[v]){ll t=u;u=v,v=t;}
    ll ans=0;
    for(ll e=ee-1;e>=0;e--){
        if(up[u][e]!=-1&&dd[up[u][e]]>=dd[v]){
            ans=max(ans,mw[u][e]);
            u=up[u][e];
        }
    }
    if(u==v){lout((ans>w));return;}
    for(ll e=ee-1;e>=0;e--){
        if(up[u][e]!=-1&&up[u][e]!=up[v][e]){
            ans=max(ans,max(mw[u][e],mw[v][e]));
            u=up[u][e],v=up[v][e];
        }
    }
    ans=max(ans,max(mw[u][0],mw[v][0]));
    lout((ans>w));
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
    for(ll i=2,u,v,w;i<=n;i++){
        cin>>u>>v>>w;
        g[u].push_back({v,w});g[v].push_back({u,w});
    }
    cin>>Q;
    init();
    for(ll i=1,u,v,w;i<=Q;i++){
        cin>>u>>v>>w;
        solve(u,v,w);
    }
}
