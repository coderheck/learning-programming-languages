#include <cstdio>
#include <vector>
#include <utility>
#include <functional>
#include <queue>
using namespace std;
#define ll long long 
#define pll pair<ll,ll>
#define taskname "qbschool"
const ll maxN=5005,inff=1000000000007;
ll n,m,k,u,v,l;
vector<vector<pll>>graph(maxN); // (vertex,weight)
vector<ll>d(maxN,inff),cnt(maxN,0);
void dickstra(){
	priority_queue<pll,vector<pll>,greater<pll>>pq; // (weight,vertex)
	pq.push({0,1}),d[1]=0,cnt[1]=1;
	while(pq.size()){
		ll w=pq.top().first,u=pq.top().second;pq.pop();
		if(w!=d[u]){continue;}
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
	printf("%lld %lld",d[n],cnt[n]);
}
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=m;i++){
		scanf("%lld%lld%lld%lld",&k,&u,&v,&l);
		graph[u].push_back({v,l});
		if(k==2){graph[v].push_back({u,l});}
	}
	dickstra();
}
