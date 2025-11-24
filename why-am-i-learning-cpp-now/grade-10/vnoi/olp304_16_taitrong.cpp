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
	bool operator<(const edge& rhs)const{return w<rhs.w;}
};
ll n,m,s,t,x,y,z;
vector<vector<edge>>graph(maxN);
ll bfs(){
	priority_queue<edge,vector<edge>,less<edge>>pq;
	vector<ll>ww(maxN,-1); // max weight to vertex 
	pq.push({s,inff});ww[s]=inff;
	while(pq.size()){
		ll u=pq.top().v,wu=pq.top().w;pq.pop();
		if(wu!=ww[u]){continue;}
		if(u==t){return wu;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,wv=nx.w,minn=min(wv,wu);
			if(ww[v]<minn){
				ww[v]=minn;
				pq.push({v,minn});
			}
		}
	}
	return -1;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin>>n>>m>>s>>t;
	for(ll i=1;i<=m;i++){
		cin>>x>>y>>z;
		graph[x].push_back({y,z});
		graph[y].push_back({x,z});
	}
	cout<<bfs();
}
