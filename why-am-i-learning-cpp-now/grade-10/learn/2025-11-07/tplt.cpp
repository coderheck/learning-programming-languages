#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=3005;
ll n,m,u,v,vis[maxN],res=0;
vector<vector<ll>>graph(maxN);
void dfs(const ll& u){
	vis[u]=true;
	for(const ll& v:graph[u]){
		if(!vis[v]){dfs(v);}
	}
}
int main(){
	if(fopen("tplt.inp","r")){
		freopen("tplt.inp","r",stdin);
		freopen("tplt.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for(ll i=1;i<=n;i++){
		if(!vis[i]){res++;dfs(i);}
	}
	cout<<res;
}
