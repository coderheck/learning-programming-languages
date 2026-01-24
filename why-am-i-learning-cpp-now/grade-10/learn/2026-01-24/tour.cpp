#include <iostream>
#include<vector>
using namespace std;
#define ll long long
#define tname "tour"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define debug(x) cerr<<"debug "<<(x)<<"\n"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=200005;
ll n,m;
vector<vector<ll>>g(maxN),vis(1005,vector<ll>(1005,-1));
bool dfs1(const ll &u,const ll &p,const ll &e){
    for(const ll &v:g[u]){
        if(v==e){vis[u][e]=1;return true;}
        if(v!=p){
            if(dfs1(v,u,e)){vis[u][v]=1;}
        }
    }
    return false;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
//        freopen(tname".out","w",stdout);
    }
	cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    if(n<=1005){
        ll res=0;
        for(ll i=1;i<=n-1;i++){
            ll u,v;cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
            vis[u][v]=vis[v][u]=0;
        }
        for(ll i=1;i<=m;i++){
            ll u,v;cin>>u>>v;
            dfs1(u,0,v);
        }
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                if(vis[i][j]!=-1&&vis[i][j]){res++;}
            }
        }
        cout<<res;
    }
}
