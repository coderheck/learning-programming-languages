#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=805;
ll n,m,res=0;
vector<vector<ll>>graph(maxN);
bool vis[maxN];
void dfs(const ll& u){
	vis[u]=true;
	for(const ll& v:graph[u]){
		if(!vis[v]){dfs(v);}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	while(m--){
		ll u,v;cin>>u>>v;
		graph[u].push_back(v);
	}
	for(ll i=1;i<=n;i++){
		if(!vis[i]){dfs(i);res++;}
	}
	cout<<res;
}
