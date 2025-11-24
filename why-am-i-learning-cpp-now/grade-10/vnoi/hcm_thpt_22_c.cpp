#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "hcm_thpt_22_c"
const ll maxN=10005,inff=100000000007;
ll n,m,k,s,t;
struct edge{
	ll v,w;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
ll ijk(const vector<vector<edge>>&graph){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	vector<ll>d(n+5,inff);
	pq.push({s,0}),d[s]=0;
	while (pq.size()) {
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		if(u==t){return d[u];}
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>d[u]+dv){
				d[v]=d[u]+dv,pq.push({v,d[v]});
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
	cin>>n>>m>>k>>s>>t;
	vector<vector<edge>>graph(n+5),graphext;
	for(ll i=1;i<=m;i++){
		ll u,v,l;cin>>u>>v>>l;
		graph[u].push_back({v,l});
	}
	ll res=ijk(graph);
	graphext=graph;
	for(ll i=1;i<=k;i++){
		ll u,v,l;cin>>u>>v>>l;
		graphext[u].push_back({v,l});
		graphext[v].push_back({u,l});
	}
	res=(res!=-1)?min(res,ijk(graphext)):ijk(graphext);
	cout<<res;
}
