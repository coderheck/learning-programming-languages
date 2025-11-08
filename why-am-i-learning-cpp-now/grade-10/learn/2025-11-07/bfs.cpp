#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
const ll maxN=105;
ll n,m,u,v;bool vis[maxN];
vector<vector<ll>>graph(maxN);
void bfs(){
	queue<ll>q;
	q.push(1);vis[1]=true;
	cout<<1<<" ";
	while(q.size()){
		ll u=q.front();q.pop();
		for(ll v:graph[u]){
			if(!vis[v]){
				vis[v]=true;
				cout<<v<<" ";
				q.push(v);
			}
		}
	}
}
int main(){
	if(fopen("bfs.inp","r")){
		freopen("bfs.inp","r",stdin);
		freopen("bfs.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	bfs();
}
