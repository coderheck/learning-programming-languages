#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define taskname "buildroad"
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=105;
ll n,m,u,v;
vector<char>vis(maxN,0);
vector<ll>starts;
void dfs(const ll& u,const vector<vector<ll>>& graph){
	vis[u]=true;
	for(const ll& v:graph[u]){
		if(!vis[v]){dfs(v,graph);}
	}
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
	for(ll i=1;i<=n;i++){
		if(not vis[i]){
			starts.push_back(i);
			dfs(i,graph);
		}
	}
	cout<<starts.size()-1<<"\n";
	for(ll i=0;i<starts.size();i++){
		cout<<starts[i]<<" "<<starts[i+1]<<"\n";
	}
}
