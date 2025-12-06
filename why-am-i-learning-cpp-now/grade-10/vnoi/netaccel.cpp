#include <algorithm>
#include <iomanip>
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
#define ll long long 
#define tname "netaccel"
const ll maxN=1005,inff=10000000007;
ll n,m,k,par[maxN];
struct edge{
	ll v,w;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
void ijk(){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	vector<ll>d(n+5,inff);
	pq.push({1,0}),d[1]=0;
	while (pq.size()) {
		ll u=pq.top().v,du=pq.top().w;
		pq.pop();
		if(du!=d[u]){continue;}
		if(u==n){return;}
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
	cin>>n>>m>>k;
	for(ll i=1;i<=m;i++){
		ll u,v,l;cin>>u>>v>>l;
		graph[u].push_back({v,l});
		graph[v].push_back({u,l});
	}
	ijk();
	vector<ll>path,ee;
	for(ll v=n;v!=0;v=par[v]){
		path.push_back(v);if(v==1){break;}
	}
	reverse(path.begin(),path.end());
	for(ll i=0;i+1<path.size();i++){
		ll u=path[i],v=path[i+1];
		for(const edge& nx:graph[u]){
			if(nx.v==v){ee.push_back(nx.w);break;}
		}
	}
	sort(ee.begin(),ee.end(),greater<float>());
	double res=0.0F;
	for(ll i=0;i<ee.size();i++){if(i<k){res=res*1.0F+0.5F*ee[i];}else{res=res*1.0F+1.0F*ee[i];}}
	cout<<fixed<<setprecision(2)<<res;
}

