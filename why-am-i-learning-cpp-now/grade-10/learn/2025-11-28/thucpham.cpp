#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <cstring>
using namespace std;
#define ll long long 
#define tname "thucpham"
const ll maxN=200005,inff=100000000007;
ll n,m,s,t,k,p,trace[maxN];
struct edge{
	ll v,w;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
ll ijk(const ll& st,const ll& nd){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
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
				trace[v]=u;
			}
		}
	}
	return -1;
}
ll raytracing(){
	trace[s]=0;
	for(ll u=t;u!=-1;u=trace[u]){
		if(u==k){return p;}
		if(u==s){break;}
	}
	return 0;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t>>k>>p;
	memset(trace,-1,sizeof trace);
	for(ll i=1;i<=m;i++){
		ll u,v,l;cin>>u>>v>>l;
		graph[u].push_back({v,l});
		graph[v].push_back({u,l});
	}
	ll r1=ijk(s,t),r2=raytracing();
	if(r1==-1){cout<<"-1";return 0;}
	cout<<r1+r2;
}
