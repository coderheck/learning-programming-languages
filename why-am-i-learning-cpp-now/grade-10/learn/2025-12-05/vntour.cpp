#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
#define ll long long 
#define tname "vntour"
#define min(A,B) ((A)<(B)?(A):(B))
const ll maxN=100005,inff=10000000007;
ll n,m;
struct edge{
	ll v,w;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
void ijk(const ll& st,vector<ll>&d,vector<ll>&c){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	d.assign(n+5,inff),c.assign(n+5,0);
	pq.push({st,0}),d[st]=0,c[st]=1;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>d[u]+dv){
				d[v]=d[u]+dv,c[v]=c[u];
				pq.push({v,d[v]});
			}else if(d[v]==d[u]+dv){
				c[v]+=c[u];
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
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		ll u,v,w;cin>>u>>v>>w;
		graph[u].push_back({v,w});
		graph[v].push_back({u,w});
	}
	vector<ll>d1,dn,c1,cn,res;
	ijk(1,d1,c1);ijk(n,dn,cn);
	for(ll i=2;i<n;i++){
		if(d1[i]+dn[i]>d1[n]||(d1[i]+dn[i]==d1[n]&&c1[i]*cn[i]!=c1[n])){
			res.push_back(i);
		}
	}
	// sort(res.begin(),res.end());
	cout<<res.size()<<"\n";
	// for(const ll& i:res){cout<<i<<"\n";}
}
