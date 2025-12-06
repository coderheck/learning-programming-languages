#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define ll long long 
#define tname "graph"
const ll maxN=105,maxM=100005,inff=100000000007;
ll n,m,q;bool vis[maxN];
struct edge{ll u,v;}a[maxM];
vector<vector<ll>>g(maxN);
void dfs(const ll& u){
    vis[u]=true;
    for(const ll& v:g[u]){
        if(!vis[v]){dfs(v);}
    }
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll u,v;cin>>u>>v;
        a[i].u=u,a[i].v=v;
    }
    cin>>q;
    while(q--){
        g.clear();memset(vis,false,sizeof vis);
        ll l,r,c=0;cin>>l>>r;
        for(ll i=l;i<=r;i++){
            g[a[i].u].push_back(a[i].v);
            g[a[i].v].push_back(a[i].u);
        }
        for(ll i=1;i<=n;i++){
            if(!vis[i]){dfs(i);c++;}
        }
        cout<<(c==1?"Yes":"NO");
    }
}