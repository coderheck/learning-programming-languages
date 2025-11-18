#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=255;
vector<vector<ll>>graph(maxN);
char vis[maxN];ll n,m,cc=0;
void dfs(const ll& u){
	vis[u]=true,cc++;
	for(const ll& v:graph[u]){if(not vis[v]){dfs(v);}}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		graph[u].push_back(v);graph[v].push_back(u);
	}
	dfs(1);
	if(not cc){cout<<"0";return 0;}
	for(ll i=1;i<=n;i++){if(not vis[i]){cout<<i<<"\n";}}
}
