#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=100005,inff=-1000000000007;
ll n,m,s,t;
struct edge{
	ll v,w;
	bool operator<(const edge &rhs)const{return w<rhs.w;}
};
vector<vector<edge>>g(maxN);
bool ijk_mod(){
	priority_queue<edge>pq;
	vector<ll>d(n+5,inff);
	pq.push({s,inff}),d[s]=inff;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(d[u]!=du){continue;}
		if(u==t){cout<<d[t]<<"\n";return true;}
		for(const edge &nx:g[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]<du+dv){
				d[v]=du+dv;
				pq.push({v,d[v]});
			}
		}
	}
	cout<<"0";
	return false;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	for(ll i=1;i<=m;i++){
		ll u,v,w;cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	if(!ijk_mod()){return 0;}
}
