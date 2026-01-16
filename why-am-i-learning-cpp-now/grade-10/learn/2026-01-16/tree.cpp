#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long
#define tname "tree"
const ll maxN=100005,inff=1000000000007;
ll n,m,q;
struct edge{
    ll v,w;
    bool operator<(const edge &rhs)const{return w>rhs.w;}
};
vector<vector<edge>>g(maxN);
ll ijk(const ll &st,const ll &nd){
    priority_queue<edge>pq;
    vector<ll>d(n+5,inff);
    pq.push({st,0});
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(d[u]!=du){continue;}
        if(u==nd){return du;}
        for(const edge &nx:g[u]){
            ll v=nx.v,dv=nx.w;
            if(d[v]>du+dv){d[v]=du+dv;pq.push({v,d[v]});}
        }
    }
    return -1;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".inp","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m>>q;
    for(ll i=1;i<=n-1;i++){
        ll u,v;cin>>u>>v;
        g[u].push_back({v,0});
        g[v].push_back({u,0});
    }
    for(ll i=1;i<=m;i++){ll a,b,c,d;cin>>a>>b>>c>>d;}
    while(q--){
        ll s,t;cin>>s>>t;
        cout<<ijk(s,t)<<"\n";
    }
}
