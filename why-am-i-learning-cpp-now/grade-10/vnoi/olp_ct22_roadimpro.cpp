#include <functional>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define ll long long 
#define tname "olp_ct22_roadimpro"
#define min(A,B) ((A)<(B)?(A):(B))
const ll maxN=2005,inff=100000000007;
ll n,m,q;
struct edge{
	ll v,w,y;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
vector<vector<ll>>d(2,vector<ll>(maxN,inff));
void ijk(){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	pq.push({1,0,false}),d[0][1]=0;
	while (pq.size()) {
		ll u=pq.top().v,du=pq.top().w,y=pq.top().y;pq.pop();
		if(du!=d[y][u]){continue;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[y][v]>du+dv){
				d[y][v]=du+dv,pq.push({v,d[y][v],y});
			}
			if(!y){
				if(d[1][v]>du){d[1][v]=du,pq.push({v,du,1});}
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
	cin>>n>>m>>q;
	for(ll i=1;i<=m;i++){
		ll u,v,l;cin>>u>>v>>l;
		graph[u].push_back({v,l});
	}
	ijk();
	while(q--){
		ll s,t0;cin>>s>>t0;
		cout<<min(d[0][s],d[1][s]+t0)<<"\n";
	}
}

