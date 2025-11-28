#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 
#define tname "dulich"
const ll maxN=200005,inff=100000000007;
ll n,m,s,t,par[maxN];
struct edge{
	ll v,w;
	bool operator<(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
vector<ll>d(maxN,inff);
void ijk(){
	priority_queue<edge>pq;
	pq.push({s,0}),d[s]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		if(u==t){return;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv,pq.push({v,d[v]});
				par[v]=u;
			}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	for(ll i=1;i<=m;i++){
		ll u,v,l;cin>>u>>v>>l;
		graph[u].push_back({v,l});
		graph[v].push_back({u,l});
	}
	ijk();
	if(d[t]==inff){cout<<"-1";return 0;}
	cout<<d[t]<<"\n";
	vector<ll>path;par[s]=0;
	for(ll u=t;u!=0;u=par[u]){path.push_back(u);if(u==s){break;}}
	reverse(path.begin(),path.end());
	for(ll i=0;i<(ll)path.size();i++){
		cout<<path[i]<<(i+1<(ll)path.size()?" -> ":"");
	}
}

