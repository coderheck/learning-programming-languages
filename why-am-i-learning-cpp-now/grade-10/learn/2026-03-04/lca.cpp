#include <cstring>
#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
#define tname "lca"
#define ll long long
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1000005,mL=20;
ll n,m,Q,rr=1,ee,dd[maxN],up[maxN][mL];
// up[i][j]: tổ tiên thứ 2^j của đỉnh i
// ee: x nhỏ nhất sao cho 2^x > số đỉnh của cây
vector<vector<ll>>g(maxN);
void init(/*const ll &rr*/){
    queue<ll>q;q.push(rr);
    dd[rr]=0,up[rr][0]=-1;
    while(q.size()){
        ll u=q.front();q.pop();
        for(const ll &v:g[u]){
            if(v==up[u][0]){continue;}
            dd[v]=dd[u]+1,up[v][0]=u;
            for(ll e=1;e<ee;e++){
                ll m=up[v][e-1];
                up[v][e]=(m==-1?-1:up[m][e-1]);
            }
            q.push(v);
        }
    }
}
ll lca(ll u,ll v){
    if(dd[u]<dd[v]){ll t=u;u=v,v=t;}
    for(ll e=ee-1;e>=0;e--){
        if(up[u][e]!=-1&&dd[up[u][e]]>=dd[v]){
            u=up[u][e];
        }
    }
    if(u==v){return u;}
    for(ll e=ee-1;e>=0;e--){
        if(up[u][e]!=-1&&up[u][e]!=up[v][e]){
            u=up[u][e],v=up[v][e];
        }
    }
    return up[u][0];
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    memset(up,-1,sizeof up);
    cin>>n;m=n-1,ee=log2(n)+1;
    for(ll i=1,u,v;i<=m;i++){
        cin>>u>>v;
        g[u].push_back(v);g[v].push_back(u);
    }
    init();
    cin>>Q;
    for(ll i=1,u,v;i<=Q;i++){
        cin>>u>>v;
        lout(lca(u,v));
    }
}
