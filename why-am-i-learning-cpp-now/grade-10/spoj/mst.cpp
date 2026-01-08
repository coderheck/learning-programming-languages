#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long 
#define tname "mst"
const ll maxN=10005;
struct edge{
	ll u,v,w;
	bool operator<(const edge &rhs)const{return w<rhs.w;}
};
vector<edge>e(maxN);
ll n,m,res=0,par[maxN],sz[maxN];
ll ff(const ll &u){
	return u==par[u]?u:par[u]=ff(par[u]);
}
void uu(ll u,ll v){
	u=ff(u),v=ff(v);
	if(u!=v){
		if(sz[u]<sz[v]){ll tm=u;u=v,v=tm;}
		par[v]=u,sz[u]+=sz[v];
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){par[i]=i,sz[i]=1;}
	for(ll i=1;i<=m;i++){
		ll u,v,w;cin>>u>>v>>w;
		e.push_back({u,v,w});
	}
	sort(e.begin(),e.end());
	// minimum spanning tree of a graph using Kruskal's Algorithm
	for(const edge &ee:e){
		if(ff(ee.u)!=ff(ee.v)){
			uu(ee.u,ee.v);res+=ee.w;
		}
	}
	// ... thats it LMAO
	cout<<res;
}
