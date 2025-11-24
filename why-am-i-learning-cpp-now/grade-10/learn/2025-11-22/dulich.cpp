#include <algorithm>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "dulich"
const ll maxN=1005,inff=100000000007;
ll n,m,s,t,trace[maxN],res=inff;
bool vis[maxN];
struct edge{
	ll v,w;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
void dijkstra(){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	vector<ll>d(maxN,inff);
	pq.push({s,0}),d[s]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		if(u==t){res=d[u];return;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>d[u]+dv){
				d[v]=d[u]+dv,trace[v]=u;
				pq.push({v,d[v]});
			}
		}
	}
}
void pathtracer(const ll& u){
	if(!trace[u]){cout<<u;return;}
	pathtracer(trace[u]);
	cout<<" -> "<<u;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	for(ll i=1;i<=m;i++){
		ll u,v,w;cin>>u>>v>>w;
		graph[u].push_back({v,w});
		graph[v].push_back({u,w});
	}
	dijkstra();
	if(res==inff){cout<<-1;return 0;}
	cout<<res<<"\n";
	vector<ll>path;
	while(t!=s){
		path.push_back(t);
		t=trace[t];
	}
	path.push_back(t);
	reverse(path.begin(),path.end());
	for(ll i=0;i<(ll)path.size();i++){
		cout<<path[i]<<(i==(ll)path.size()-1?"":" -> ");
	}
}
