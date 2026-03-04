#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
#define tname "trongso"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1000005,mL=20;
ll n,m,Q,rr=1,ee,dd[maxN],up[maxN][mL],mw[maxN][mL];
struct edge{ll v,w;};
vector<vector<edge>>g(maxN);
void init(/*const ll &rr*/){
    queue<ll>q;q.push(rr);
    dd[rr]=0,up[rr][0]=-1;
    while(q.size()){
        ll u=q.front();q.pop();
        for(const edge &nx:g[u]){
            ll v=nx.v,w=nx.w;
            if(v==up[u][0]){continue;}
            dd[v]=dd[u]+1,up[v][0]=u,mw[v][0]=w;
            for(ll e=1;e<ee;e++){
                ll m=up[v][e-1];
                if(m!=-1){
                    up[v][e]=up[m][e-1];
                    mw[v][e]=max(mw[v][e-1],mw[m][e-1]);
                }else{
                    up[v][e]=-1;
                }
            }
            q.push(v);
        }
    }
}
ll solve(ll u,ll v){
    if(dd[u]<dd[v]){ll t=u;u=v,v=t;}
    ll ans=max(mw[u][0],mw[v][0]);
    for(ll e=ee-1;e>=0;e--){
        if(up[u][e]!=-1&&dd[up[u][e]]>=dd[v]){
            ans=max(ans,mw[u][e]);
            u=up[u][e];
        }
    }
    if(u==v){return ans;}
    for(ll e=ee-1;e>=0;e--){
        if(up[u][e]!=-1&&up[u][e]!=up[v][e]){
            ans=max(ans,max(mw[u][e],mw[v][e]));
            u=up[u][e],v=up[v][e];
        }
    }
    return ans;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    memset(up,-1,sizeof up);
    cin>>n>>m;ee=log2(n)+1;
    for(ll i=1,u,v,w;i<=m;i++){
        cin>>u>>v>>w;
        g[u].push_back({v,w});g[v].push_back({u,w});
    }
    init();
    cin>>Q;
    for(ll i=1,u,v;i<=Q;i++){
        cin>>u>>v;
        lout(solve(u,v));
    }
}
