#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "connect"
const ll maxN=100005;
ll n,m,u,v,res=0;
vector<vector<ll>>graph(maxN);
char vis[maxN];
void bfs(const ll& s){
	res++;
	queue<ll>q;q.push(s);
	vis[s]=true;
	while(q.size()){
		const ll& u=q.front();q.pop();
		for(const ll& v:graph[u]){
			if(!vis[v]){q.push(v);vis[v]=true;}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		graph[u].push_back(v);graph[v].push_back(v);
	}
	for(ll i=1;i<=n;i++){
		if(!vis[i]){bfs(i);}
	}
	cout<<res;
}
