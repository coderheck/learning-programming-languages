#include <iostream>
#include <vector>
using namespace std;
#define taskName "tree"
#define ll long long 
const ll maxN=10005;
ll n,m,u,v;
void dickfirst(const ll& u,vector<vector<ll>>&adj,vector<char>&vis){
	vis[u]=1;
	for(const ll& v:adj[u]){if(!vis[v]){dickfirst(v,adj,vis);}}
}
int main(){
	if(fopen(taskName".inp","r")){
		freopen(taskName".inp","r",stdin);
		freopen(taskName".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	vector<vector<ll>>graph(n+5);
	vector<char>vis(n+5,0);
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	dickfirst(1,graph,vis);
	for(ll i=1;i<=n;i++){if(!vis[i]){cout<<"NO";return 0;}}
	if(m!=n-1){cout<<"NO";return 0;}
	cout<<"YES";
}
