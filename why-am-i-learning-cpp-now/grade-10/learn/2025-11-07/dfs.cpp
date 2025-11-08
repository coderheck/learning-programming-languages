#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=105;
ll n,m,u,v;bool vis[maxN];
vector<vector<ll>>graph(maxN);
void dfs(ll u){
	vis[u]=true;
	cout<<u<<" ";
	for(ll v:graph[u]){if(!vis[v]){dfs(v);}}
}
int main(){
	if(fopen("dfs.inp","r")){
		freopen("dfs.inp","r",stdin);
		freopen("dfs.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	dfs(1);
}
