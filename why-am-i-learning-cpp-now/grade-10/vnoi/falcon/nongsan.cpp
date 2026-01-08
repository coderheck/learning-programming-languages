#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;
#define ll long long 
#define tname "nongsan"
const ll maxN=1005;
struct edge{
	ll v,w;
	bool operator<(const edge &rhs)const{return w<rhs.w;}
};
vector<vector<edge>>g(maxN);
vector<ll>d(maxN,LLONG_MAX);
void ijk(const ll &st){
	priority_queue<edge>pq;
	pq.push({st,0}),d[st]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		for(const edge &nx:g[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv,pq.push({v,d[v]});
			}
		}
	}
}
ll n,m,s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s;
	for(ll i=1;i<=m;i++){
		ll u,v,w;cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	ijk(s);
	for(ll i=1;i<=n;i++){
		cout<<i<<": "<<d[i]<<"\n";
	}
}
