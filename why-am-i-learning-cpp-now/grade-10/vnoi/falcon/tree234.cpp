#include <iostream>
#include <iterator>
#include <utility>
#include <vector>
#include <map>
#include <set>
using namespace std;
#define tname "tree234"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";/*cerr<<(x)<<"\n";*/
const ll maxN=200005,ML=18;
ll n,q,tt=0,cc[maxN],dd[maxN],up[maxN][ML],in[maxN],out[maxN];
vector<vector<ll>>g(maxN);
void dfs(const ll &u,const ll &p){
    in[u]=++tt,up[u][0]=p;
    for(ll e=1;e<ML;e++){up[u][e]=up[up[u][e-1]][e-1];}
    for(const ll &v:g[u]){
        if(v==p){continue;}
        dd[v]=dd[u]+1;
        dfs(v,u);
    }
    out[u]=tt;
}
bool isUnc(const ll &u,const ll &v){
    return in[u]<=in[v]&&out[v]<=out[u];
}
ll lca(ll u,ll v){
    if(isUnc(u,v)){return u;}
    if(isUnc(v,u)){return v;}
    for(ll e=ML-1;e>=0;e--){
        if(!isUnc(up[u][e],v)){u=up[u][e];}
    }
    return up[u][0];
}
ll dist(const ll &u,const ll &v){
    return dd[u]+dd[v]-(dd[lca(u,v)]<<1);
}
map<ll,set<pair<ll,ll>>>ns;
map<ll,ll>tdist;
void upd(const ll &c,const ll &u,const ll &t){
    set<pair<ll,ll>> &s=ns[c];
    if(s.empty()){return;}
    auto it=s.find({in[u],u}),lt=it,rt=it;
    if(it==s.begin()){lt=prev(s.end());}else{lt=prev(it);}
    rt=next(it);
    if(rt==s.end()){rt=s.begin();}
    ll pn=lt->second,rn=rt->second;
    if(t&1){
        tdist[c]+=dist(pn,u)+dist(u,rn)-dist(pn,rn);
    }else{
        tdist[c]+=dist(pn,rn)-dist(pn,u)-dist(u,rn);
    }
}
void add(const ll &c,const ll &u){
    ns[c].insert({in[u],u});
    if(ns[c].size()==1){tdist[c]=0;}else{upd(c,u,1);}
}
void rem(const ll &c,const ll &u){
    if (ns[c].size()==1){
        ns[c].erase({in[u],u}),tdist.erase(c);
    }else{
        upd(c,u,2),ns[c].erase({in[u],u});
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=2,u,v;i<=n;i++){
        cin>>u>>v;
        g[u].push_back(v);g[v].push_back(u);
    }
    for(ll i=1;i<=n;i++){cin>>cc[i];}
    dd[1]=0;dfs(1,1);
    for(ll i=1;i<=n;i++){add(cc[i],i);}
    cin>>q;
    for(ll i=1,x,c;i<=q;i++){
        char type;cin>>type;
        if(type=='Q'){
            cin>>c;
            lout((ns[c].empty()?-1:(tdist[c]>>1)));
        }else{
            cin>>x>>c;
            rem(cc[x],x);
            cc[x]=c;
            add(cc[x],x);
        }
    }
}
