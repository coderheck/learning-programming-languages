#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>
using namespace std;
#define tname "zoning"
#define ll long long
#define umap unordered_map
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define getbit(x,k) (x>>k)&1
const ll maxN=100005,maxMask=(1<<16)+1;
ll n,m,res=0;
vector<vector<ll>>g(maxN);
bool bfs_check(const ll &st,const ll &sz,umap<ll,bool>&in){
    bool vis;
    queue<ll>q;q.push(st);
    vis[st]=true;
    while(q.size()){
        ll u=q.front();q.pop();
        for(const ll &v:g[u]){
            if(!vis[v]&&in[v]==true){q.push(v);vis[v]=true;}
        }
    }
    return sz==vis.size();
}
ll adj(const ll &st,umap<ll,bool>&in){
    ll c=0;
    for(const ll &v:g[st]){c+=in[v];}
    return c;
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(ll mm=1;mm<maxMask;mm++){
        // bitmask với bit thứ i của mask là
        // trạng thái chọn của đỉnh thứ i
        umap<ll,bool>pick;
        for(ll i=1;i<=n;i++){
            if(getbit(mm,i-1)){pick[i]=true;}
        }
        bool scc=true;
        for(const auto &x:pick){
            if(!bfs_check(x.first,pick.size(),pick)){scc=false;break;}
        }
        if(!scc){continue;}
        ll minC=1000000000007;
        for(const auto &x:pick){
            minC=min(minC,bfs_adj(x.first,pick));
        }
        res=max(res,minC*pick.size());
    }
    lout(res);
}
