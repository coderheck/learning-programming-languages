#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define ll long long 
#define taskname "roads"
const ll maxN=5005,inff=1000000000007;
ll T,k,n,r,s,d,l,t;
struct edge{ll v,dis,cost;};
class ccmp{
	bool operator()(const edge& a,const edge& b){
		return a.dis==b.dis ? a.cost>b.cost : a.dis>b.dis;
	}
};
vector<vector<edge>>graph(maxN); // (vertex,distance,cost)
void dickcha(const ll& st,const ll& nd){
	priority_queue<edge,vector<edge>,ccmp>pq; // (weight,distance,cost)
	vector<ll>d(n+5,inff),cc(n+5,inff);
	pq.push({0,st}),d[st]=cc[st]=0;
	while(pq.size()){
		ll w=pq.top().dis,c=pq.top().cost,u=pq.top().v;pq.pop();
		if(w!=d[u]){continue;}
		if(c!=cc[u]){continue;}
		if(u==nd&&cc[u]<=k){cout<<d[nd]<<"\n";}
		for(const edge& nxt:graph[u]){
			ll v=nxt.v,len=nxt.dis,cos=nxt.cost;
			if(d[v]>d[u]+len){
				d[v]=d[u]+len;
				pq.push({d[v],v});
			}
		}
	}
	cout<<"-1\n";
}
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
		cin>>k>>n>>r;
		for(ll i=1;i<=r;i++){
			cin>>s>>d>>l>>t;
			graph[s].push_back({d,l,t});
			graph[d].push_back({s,l,t});
		}
		dickcha(1,n);
	}
}
