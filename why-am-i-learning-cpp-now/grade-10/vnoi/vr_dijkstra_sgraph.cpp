#include<iostream>
#include<climits>
#include<vector>
#include<queue>
using namespace std;
#define ll long long 
#define tname "vr_dijkstra_sgraph"
const ll maxN=200005;
ll n,m;
struct edge{
    ll v,w;
    bool operator<(const edge &rhs)const{return w>rhs.w;}
};
vector<vector<edge>>g(maxN);
ll ijk(const ll &st,const ll &nd){
    priority_queue<edge>pq;
    vector<ll>d(n+5,LLONG_MAX);
    pq.push({st,0}),d[st]=0;
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(d[u]!=du){continue;}
        if(u==nd){return d[u];}
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll u,v,w;cin>>u>>v>>w;
        g[u].push_back({v,w});
    }

}