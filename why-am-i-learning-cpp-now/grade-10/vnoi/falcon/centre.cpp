#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "centre"
#define min(A,B) ((A)<(B)?(A):(B))
const ll maxN=30005,inff=10000000007;
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
				c[v]=min(inff,c[v]+c[u]);
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
	ll len=d1[n];
	for(ll u=2;u<n;u++){
		if(d1[u]+dn[u]==len){
			if(c1[u]*cn[u]<c1[n]){res.push_back(u);}
		}else{
			res.push_back(u);
		}
	}
	cout<<res.size()<<"\n";
	for(const ll& u:res){cout<<u<<"\n";}
}
