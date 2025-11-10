#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define taskName "tree"
#define ll long long 
ll n,m,u,v,res=0;
void dickfirst(const ll& u,vector<vector<ll>>&adj,vector<char>&vis){
	vis[u]=1;
	for(const ll& v:adj[u]){if(!vis[v]){dickfirst(v,adj,vis);}}
}
void boobfirst(const ll& i,vector<vector<ll>>&adj,vector<char>&vis){
	queue<ll>q;
	q.push(i);vis[i]=1;
	while(q.size()){
		const ll& u=q.front();q.pop();
		for(const ll& v:adj[u]){
			if(!vis[v]){q.push(v);vis[v]=1;}
		}
	}
	for(ll j=1;j<=n;j++){res+=vis[j];}
}
int main(){
	if(fopen(taskName".inp","r")){
		freopen(taskName".inp","r",stdin);
		// freopen(taskName".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	vector<vector<ll>>graph(n+5);
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
	}
	for(ll i=1;i<=n;i++){
		vector<char>vis(n+5);
		// dickfirst(i,graph,vis);
		// for(ll j=1;j<=n;j++){res+=vis[j];}
		boobfirst(i,graph,vis);
	}
	cout<<res;
}
