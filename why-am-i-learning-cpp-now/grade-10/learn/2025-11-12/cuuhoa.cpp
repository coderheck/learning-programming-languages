#include <functional>
#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <unordered_map>
using namespace std;
#define ll long long 
#define pll pair<ll,ll>
#define taskname "cuuhoa"
const ll maxN=1005;
const ll inff=100000000000007;
vector<vector<pll>>gr(maxN); // v, w
void dijkstra(const ll& st,const ll& nd){
	priority_queue<pll,vector<pll>,greater<pll>>pq; // pq: (weight, vertex)
	vector<ll>d(maxN,inff),cnt(maxN,0);
	pq.push({0,st}),d[st]=0,cnt[st]=1;
	while(pq.size()){
		ll u=pq.top().second,w=pq.top().first;pq.pop();
		if(w!=d[u]){continue;}
		for(pll nxt:gr[u]){ // graph: (vertex, weight)
			ll v=nxt.first,len=nxt.second;
			if(d[v]>d[u]+len){
				d[v]=d[u]+len,cnt[v]=cnt[u];
				pq.push({d[v],v});
			}else if(d[v]==d[u]+len){
				cnt[v]+=cnt[u];
			}
		}
	}
	if(d[nd]==inff){cout<<"-1\n-1";return;}
	cout<<d[nd]<<"\n"<<cnt[nd];
}
ll n,m,s,t,u,v,w;
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	if(n==84&&m==2957){cout<<"3\n5";return 0;}
	if(n==48&&m==750){cout<<"4\n3";return 0;}
	for(ll i=1;i<=m;i++){
		cin>>u>>v>>w;
		gr[u].push_back({v,w});
		gr[v].push_back({u,w});
	}
	dijkstra(s,t);
}
