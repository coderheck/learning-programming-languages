#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "qbmst"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=10005;
ll n,m,res=0;
struct edge{
	ll v,w;
	bool operator<(const edge &rhs)const{return w>rhs.w;}
};
vector<vector<edge>>g(maxN);
bool vis[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		ll u,v,w;cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	priority_queue<edge>pq;
	pq.push({1,0});
	while(pq.size()){
		ll u=pq.top().v,wu=pq.top().w;pq.pop();
		if(vis[u]){continue;}else{vis[u]=true;}
		res+=wu;
		for(const edge &nx:g[u]){
			ll v=nx.v,wv=nx.w;
			if(!vis[v]){pq.push({v,wv});}
		}
	}
	lout(res)
}
