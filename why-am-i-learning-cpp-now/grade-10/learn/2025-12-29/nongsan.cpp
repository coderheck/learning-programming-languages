#include<iostream>
#include<vector>
#include<queue>
using namespace std;
#define ll long long
#define tname "nongsan"
const ll maxN=1005,inff=10000000000007;
ll n,m,s;
struct edge{
	ll v,w;
	bool operator<(const edge &rhs)const{return w<rhs.w;}
};
vector<vector<edge>>g(maxN);
vector<ll>d(maxN,inff);
void ijk(){
	priority_queue<edge>pq;
	pq.push({s,0}),d[s]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		for(const edge &nx:g[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv;pq.push({v,d[v]});
			}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
//		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s;
	for(ll i=1;i<=n;i++){
		ll u,v,w;cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	ijk();
	for(ll i=1;i<=n;i++){
		cout<<i<<": "<<(d[i]==inff?-1:d[i])<<"\n";
	}
}
