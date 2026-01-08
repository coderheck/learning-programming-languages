#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define tname "lca"
const ll maxN=100005;
vector<vector<ll>>g(maxN),q(maxN);
ll n,Q,par[maxN],sz[maxN],anc[maxN];
bool vis[maxN];
ll ffind(const ll &u){
	return u==par[u]?u:par[u]=ffind(par[u]);
}
void uuni(ll u,ll v){
	u=ffind(u),v=ffind(v);
	if(u!=v){
		if(sz[u]<sz[v]){ll tm=u;u=v,v=tm;}
		par[v]=u,sz[u]+=sz[v];
	}
}
void dfs(const ll &u,const ll &p){
	anc[u]=u;
	for(const ll &v:g[u]){
		if(v==p){continue;}
		dfs(v,u);uuni(u,v);
		anc[ffind(u)]=u;
	}
	vis[u]=true;
	for(const ll &v:q[u]){
		if(vis[v]){cout<<anc[ffind(v)]<<"\n";}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){par[i]=i,sz[i]=1;}
	for(ll i=1;i<n;i++){
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	cin>>Q;
	while(Q--){
		ll u,v;cin>>u>>v;
		q[u].push_back(v);
		q[v].push_back(u);
	}
	dfs(1,-1);
}
