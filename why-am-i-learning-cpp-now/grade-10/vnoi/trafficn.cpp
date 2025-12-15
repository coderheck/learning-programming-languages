#include <iostream>
#include <algorithm>
#include <print>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
#define tname "trafficn"
const ll inff=100000000007;
struct edge{
    ll v,w;
    bool operator<(const edge &rhs)const{return w>rhs.w;}
};
vector<vector<edge>>g;
ll T,n,m,k,s,t;
ll ijk(){
    priority_queue<edge>pq;
    vector<ll>d(n+5,inff);
    pq.push({s,0}),d[s]=0;
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(d[u]!=du){continue;}
        if(u==t){return d[u];}
        for(const edge &nx:g[u]){
            ll v=nx.v,dv=nx.w;
            if(d[v]>d[u]+dv){
                d[v]=d[u]+dv,pq.push({v,d[v]});
            }
        }
    }
    return inff;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>T;
    while(T--){
        cin>>n>>m>>k>>s>>t;
        g.clear();
        g.assign(n+5,vector<edge>());
        for(ll i=1;i<=m;i++){
            ll u,v,w;cin>>u>>v>>w;
            g[u].push_back({v,w});
        }
        ll res=ijk();
        for(ll i=1;i<=k;i++){
            ll u,v,w;cin>>u>>v>>w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
            res=min(res,ijk());
            g[u].pop_back();g[v].pop_back();
        }
        cout<<(res!=inff?res:-1)<<"\n";
    }
}
