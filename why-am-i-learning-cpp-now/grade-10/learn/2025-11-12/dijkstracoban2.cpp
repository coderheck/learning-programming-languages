#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <functional>
using namespace std;
#define ll long long 
#define pll pair<ll,ll>
#define taskname "dijkstracoban2"
const ll maxN=100005;
const ll inff=100000000000007;
vector<ll> dijkstra(const ll& st,const ll& nd,const vector<vector<pll>>&gr){
	priority_queue<pll,vector<pll>,greater<pll>>pq; // pq: (weight, vertex)
	vector<ll>d(gr.size(),inff);vector<char>vis(gr.size(),0);
	pq.push({0,st});d[st]=0;
	while(pq.size()){
		ll u=pq.top().second;pq.pop();
		if(vis[u]){continue;}else{vis[u]=1;}
		for(pll nxt:gr[u]){ // graph: (vertex, weight)
			ll v=nxt.first,len=nxt.second;
			if(d[v]>d[u]+len){
				d[v]=d[u]+len;
				pq.push({d[v],v});
			}
		}
	}
	return d;
}
ll n,m,s,t,u,v,w;
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	vector<vector<pll>>gr(n+5);
	for(ll i=1;i<=m;i++){
		cin>>u>>v>>w;
		gr[u].push_back({v,w});
	}
	vector<ll>res=dijkstra(1,n,gr); // 1 -> n => all vertex checked
	for(ll i=2;i<=n;i++){cout<<res[i]<<" ";}
}
