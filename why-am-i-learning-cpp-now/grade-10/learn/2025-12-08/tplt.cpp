#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define tname "tplt"
const ll maxN=100005;
ll n,m,res=0;bool vis[maxN];
vector<vector<ll>>g(maxN);
void dfs(const ll &u){
	vis[u]=true;
	for(const ll &v:g[u]){
		if(!vis[v]){dfs(v);}
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
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(ll i=1;i<=n;i++){
		if(!vis[i]){res++;dfs(i);}
	}
	cout<<res;
}
