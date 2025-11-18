#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;
#define ll long long 
#define tname "taitrong"
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=1005,inff=10000000007;
struct edge{
	ll v,w;
	bool operator<(const edge& rhs){return w<rhs.w;}
};
ll n,m,s,t,x,y,z,res=0;
vector<vector<edge>>graph(maxN);
void bfs(){
	priority_queue<edge,vector<edge>,less<edge>>pq;
	vector<ll>ww(maxN,-1); // max weight to vertex 
	pq.push({s,inff});ww[s]=inff;
	while(pq.size()){
		ll u=pq.top().v,cw=pq.top().w;pq.pop();
		if(cw<ww[u]){continue;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,tw=nx.w,nw=min(
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin>>n>>m>>s>>t;
	for(ll i=1;i<=m;i++){
		cin>>x>>y>>z;
		graph[x].push_back({y,z});
		graph[y].push_back({x,z});
	}
	for(const edge& e:graph[s]){bfs(s,e.w);}
	cout<<res;
}
