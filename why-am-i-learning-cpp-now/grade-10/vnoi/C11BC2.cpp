#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define tname "c11bc2"
const ll maxN=10005;
ll n,m,area[maxN],id=0;
bool vis[maxN];
vector<vector<ll>>graph(maxN);
void dfs(const ll& u){
	vis[u]=true,area[u]=id;
	for(const ll& v:graph[u]){
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
	for(ll i=2;i<=n;i++){
		ll v,w;cin>>v>>w;
		if(w&1){graph[i].push_back(v);graph[v].push_back(i);}
	}
	for(ll i=1;i<=n;i++){
		if(!vis[i]){id++;dfs(i);}
	}
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		cout<<(area[u]==area[v]?"NO\n":"YES\n");
	}
}
