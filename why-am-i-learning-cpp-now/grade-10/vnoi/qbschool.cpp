#include <iostream>
#include <vector>
#include <utility>
#include <functional>
#include <queue>
using namespace std;
#define ll long long 
#define pll pair<ll,ll>
const ll maxN=5005;
const ll inff=1000000000007;
ll n,m,k,u,v,l;
vector<vector<pll>>graph(maxN); // (vertex,weight)
void dickstra(){
	priority_queue<pll,vector<pll>,greater<pll>>pq; // (weight,vertex)
	vector<ll>d(maxN,inff),cnt(maxN,0);
	pq.push({0,1}),d[1]=0,cnt[1]=1;
	while(pq.size()){
		ll u=pq.top().second,w=pq.top().first;pq.pop();
		if(w!=d[u]){continue;}
		if(u==n){cout<<d[u];return;}
		for(const pll& nxt:graph[u]){
			ll v=nxt.first,len=nxt.second;
			if(d[v]>d[u]+len){
				d[v]=d[u]+len,cnt[v]=cnt[u];
				pq.push({d[v],v});
			}else if(d[v]==d[u]+len){
				cnt[v]+=cnt[u];
			}
		}
	}
	cout<<d[n]<<" "<<cnt[n];
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>k>>u>>v>>l;
		graph[u].push_back({v,l});
		if(k==2){graph[v].push_back({u,l});}
	}
	dickstra();
}
