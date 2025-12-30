#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
#define tname "lca"
const ll maxN=100005;
ll n,q,par[maxN],sz[maxN],anc[maxN];
bool vis[maxN];
struct pll{ll u,v;};
vector<vector<ll>>g(maxN),qq(maxN);
ll ffind(const ll &u){
	return u==par[u]?u:par[u]=ffind(par[u]);
}
void uuni(ll u,ll v){
	u=ffind(u),v=ffind(v);
	if(u!=v){
		if(sz[u]<sz[v]){swap(u,v);}
		par[v]=u,sz[u]+=sz[v];
	}
}
void dfs(const ll &v){
	vis[v]=true,anc[v]=v;
	for(const ll &u:g[v]){
		if(!vis[u]){
			dfs(u);
			uuni(v,u);
			anc[ffind(u)]=v;
		}
	}
	for(const ll &u:qq[v]){
//		if(vis[u]){
			cout<<"lca("<<v<<","<<u<<")="<<anc[ffind(u)]<<"\n";
//		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
//		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){par[i]=i,sz[i]=1;}
	for(ll i=1;i<=n;i++){
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	cin>>q;
	while(q--){
		ll u,v;cin>>u>>v;
		qq[u].push_back(v);
		qq[v].push_back(u);
	}
	dfs(1);
}
