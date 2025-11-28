#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "logistics"
const ll maxN=200005,inff=100000000007;
ll n,m,s,x,t;
struct edge{
	ll v,w;
	bool operator<(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
ll ijk(const ll& st,const ll& nd){
	priority_queue<edge>pq;
	vector<ll>d(n+5,inff);
	pq.push({st,0}),d[st]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		if(u==nd){return du;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv,pq.push({v,d[v]});
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
		ll u,v,l;cin>>u>>v>>l;
		graph[u].push_back({v,l});
		graph[v].push_back({u,l});
	}
	ll r1=ijk(s,x),r2=ijk(x,t);
	cout<<(r1==-1||r2==-1?-1:r1+r2);
}

