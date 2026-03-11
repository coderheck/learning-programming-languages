#include <iostream>
#include <vector>
using namespace std;
#define tname "maxcost"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=1000005;
ll n,sum=0,res[maxN],a[maxN],dd[maxN],subs[maxN];
vector<vector<ll>>g(maxN);
void init(const ll &u,const ll &p,const ll &d){
    dd[u]=d,res[1]+=d*a[u],subs[u]=a[u];
    for(const ll &v:g[u]){
        if(v==p){continue;}
        init(v,u,d+1);
        subs[u]+=subs[v];
    }
}
void reroot(const ll &u,const ll &p){
    for(const ll &v:g[u]){
        if(v==p){continue;}
        res[v]=res[u]+sum-subs[v]*2;
        reroot(v,u);
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];sum+=a[i];}
    for(ll i=2,u,v;i<=n;i++){
        cin>>u>>v;
        g[u].push_back(v),g[v].push_back(u);
    }
    init(1,-1,0);reroot(1,-1);
    for(ll i=1;i<=n;i++){
        res[n+1]=(res[n+1]>res[i]?res[n+1]:res[i]);
    }
    lout(res[n+1]);
}
