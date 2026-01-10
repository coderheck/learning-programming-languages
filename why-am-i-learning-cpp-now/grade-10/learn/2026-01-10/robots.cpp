#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define tname "robots"
#define debug(x) cout<<(x)<<" "
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005,inff=10000000000007;
struct edge{
    ll v,w;
    bool operator<(const edge &rhs)const{return w>rhs.w;}
};
vector<vector<edge>>g(maxN);
void ijk(const ll &st,vector<ll>&d){
    priority_queue<edge>pq;
    pq.push({st,0}),d[st]=0;
    while(pq.size()){
        ll u=pq.top().v,du=pq.top().w;pq.pop();
        if(d[u]!=du){continue;}
        for(const edge &nx:g[u]){
            ll v=nx.v,dv=nx.w;
            if(d[v]>du+dv){
                d[v]=du+dv;pq.push({v,d[v]});
            }
        }
    }
}
ll n,m,x,y,res=inff,resNode=-1;
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
        g[v].push_back({u,w});
    }
    cin>>x>>y;
    vector<ll>dx(n+5,inff),dy(n+5,inff);
    ijk(x,dx);ijk(y,dy);
    for(ll i=1;i<=n;i++){
        if(dx[i]==inff||dy[i]==inff||i==x||i==y){continue;}
        // if(res>max(dx[i],dy[i])){
        //     res=max(dx[i],dy[i]),resNode=i; // correct
        // }
        // res=min(res,dx[i]+dy[i]); // WRONG!!! HELL NAH!!!!!!
        res=min(res,max(dx[i],dy[i]));
    }
    cout<<res;
}
