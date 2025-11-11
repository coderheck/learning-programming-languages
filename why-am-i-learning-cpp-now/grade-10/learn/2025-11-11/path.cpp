#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define taskname "path"
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=200005;
const ll lim=1000000;
ll n,m,u,v,res=0;
vector<char>vis(maxN,0);
void dfs(const ll& u,const vector<vector<ll>>& graph){
	res++;if(res>=lim){return;}
	vis[u]=true;
	for(const ll& v:graph[u]){
		if(!vis[v]){dfs(v,graph);if(res>=lim){return;}}
	}
	vis[u]=false;
}
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	vector<vector<ll>>graph(n+5);
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	dfs(1,graph);
	cout<<min(res,lim);
}
