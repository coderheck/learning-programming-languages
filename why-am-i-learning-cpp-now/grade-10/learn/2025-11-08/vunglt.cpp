#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=3005;
ll n,m,u,v;bool vis[maxN];
vector<vector<ll>>graph(maxN);
vector<ll>res;
void dfs(const ll& u){
	vis[u]=true;res.push_back(u);
	for(const ll& v:graph[u]){
		if(!vis[v]){dfs(v);}
	}
}
int main(){
	if(fopen("vunglt.inp","r")){
		freopen("vunglt.inp","r",stdin);
		// freopen("vunglt.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for(ll i=1;i<=n;i++){
		if(!vis[i]){
			res.clear();
			dfs(i);
			sort(res.begin(),res.end());
			for(const ll& u:res){cout<<u<<" ";}
			cout<<"\n";
		}
	}
}
