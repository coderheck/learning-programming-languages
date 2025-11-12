#include <functional>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;
#define ll long long 
#define pll pair<ll,ll>
#define taskname "dijtracoban1"
const ll maxN=100005;
const ll inff=100000000000007;
vector<vector<pll>>gr(maxN); // v, w
ll dijkstra(const ll& st,const ll& nd){
	priority_queue<pll,vector<pll>,greater<pll>>pq; // pq: (weight, vertex)
	vector<ll>d(maxN,inff);
	pq.push({0,st});d[st]=0;
	while(pq.size()){
		ll u=pq.top().second,w=pq.top().first;pq.pop();
		if(w!=d[u]){continue;}
		if(u==nd){return d[u];}
		for(pll nxt:gr[u]){ // graph: (vertex, weight)
			ll v=nxt.first,len=nxt.second;
			if(d[v]>d[u]+len){
				d[v]=d[u]+len;
				pq.push({d[v],v});
			}
		}
	}
	return -1;
}
ll n,m,s,t,u,v,w;
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	for(ll i=1;i<=m;i++){
		cin>>u>>v>>w;
		gr[u].push_back({v,w});
	}
	cout<<dijkstra(s,t);
}
