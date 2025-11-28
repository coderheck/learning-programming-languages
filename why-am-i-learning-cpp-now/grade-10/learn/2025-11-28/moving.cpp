#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "moving"
const ll maxn=200005,inff=100000000007;
ll n,m;
struct edge{
	ll v,w;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxn);
vector<ll>d(maxn,inff);
void ijk(){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	pq.push({1,0}),d[1]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv,pq.push({v,d[v]});
			}
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
		ll u,v,l;cin>>u>>v>>l;
		graph[u].push_back({v,l});
		graph[v+n].push_back({u+n,l});
	}
	for(ll i=1;i<=n;i++){
		graph[i].push_back({i+n,0});
	}
	ijk();
	for(ll i=2;i<=n;i++){
		cout<<(d[i+n]!=inff?d[i+n]:-1)<<" ";
	}
}
