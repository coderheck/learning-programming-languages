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
vector<ll>d1(n+5,LLONG_MAX); // distForward (từ 1 -> i)
vector<ll>dn(n+5,LLONG_MAX); // distBackward (từ i -> 1)
void ijk(const ll &st,vector<ll>&d){
    priority_queue<edge>pq;
    pq.push({st,0}),d[st]=0;
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(d[u]!=du){continue;}
        for(const edge &nx:g[u]){
            ll v=nx.v,dv=nx.w;
            if(d[v]>du+dv){
                d[v]=du+dv;
                pq.push({v,d[v]});
            }
        }
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
    ijk(1,d1);ijk(n,dn);
    for(ll i=2;i<=n;i++){
        if(d1[i]+dn[i]==)
    }
}
