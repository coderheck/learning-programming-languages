#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
#define ll long long 
#define tname "logistics"
const ll maxN=1005,inff=100000000007;
ll n,m,s,x,t;
struct edge{
	ll v,w;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
ll dijkstra(const ll& st,const ll& nd){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	vector<ll>d(maxN,inff);vector<bool>vis(maxN,false);
	pq.push({st,0}),d[st]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		if(u==nd){return d[u];}
		vis[u]=true;
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>d[u]+dv){
				d[v]=d[u]+dv;
				pq.push({v,d[v]});
			}
		}
	}
	return -1;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>x>>t;
	for(ll i=1;i<=m;i++){
		ll u,v,w;cin>>u>>v>>w;
		graph[u].push_back({v,w});
		graph[v].push_back({u,w});
	}
	ll r1=dijkstra(s,x),r2=dijkstra(x,t);
	if(r1==-1||r2==-1){cout<<"-1";return 0;}
	cout<<r1+r2;
}

