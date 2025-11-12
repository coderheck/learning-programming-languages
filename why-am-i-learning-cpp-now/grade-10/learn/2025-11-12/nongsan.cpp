#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <functional>
#include <climits>
using namespace std;
#define ll long long 
#define pll pair<ll,ll>
#define taskname "nongsan"
const ll inff=100000000000007;
ll n,m;
vector<ll> dijkstra(const ll& st,const vector<vector<pll>>&gr){
	priority_queue<pll,vector<pll>,greater<pll>>pq; // pq: (weight, vertex)
	vector<ll>d(n+5,inff);
	pq.push({0,st});d[st]=0;
	while(pq.size()){
		ll u=pq.top().second,w=pq.top().first;pq.pop();
		if(w!=d[u]){continue;}
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
ll s,t,u,v,w;
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s;
	vector<vector<pll>>gr(n+5);
	for(ll i=1;i<=m;i++){
		cin>>u>>v>>w;
		gr[u].push_back({v,w});
		gr[v].push_back({u,w});
	}
	vector<ll>res=dijkstra(s,gr); // 1 -> n => all vertex checked
	for(ll i=1;i<=n;i++){cout<<i<<": "<<(res[i]!=LLONG_MAX?res[i]:-1)<<"\n";}
}
