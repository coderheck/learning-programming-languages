#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=105;
ll n,m,k,u,v;bool vis[maxN];
vector<vector<ll>>graph(maxN);
void dfs(ll u){
	vis[u]=true;
	if(u==k){cout<<"yes";return;}
	for(ll v:graph[u]){
		if(!vis[v]){dfs(v);}
	}
}
void bfs(){
	queue<ll>q;
	q.push(1);vis[1]=true;
	while(q.size()){
		ll u=q.front();q.pop();
		for(ll v:graph[u]){
			if(!vis[v]){
				if(v==k){cout<<"yes";return;}
				vis[v]=true;
				q.push(v);
			}
		}
	}
	cout<<"no";
}
int main(){
	if(fopen("net.inp","r")){
		freopen("net.inp","r",stdin);
		freopen("net.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>k;
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	bfs();
}
