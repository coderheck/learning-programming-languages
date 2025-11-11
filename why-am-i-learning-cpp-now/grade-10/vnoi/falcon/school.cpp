#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=5005,fuck=1000000000007;
ll n,m,k,u,v,l,res=1000000000007,resc=0,d[maxN],cnt[maxN];
struct edge{ll v,l;};bool vis[maxN];
vector<vector<edge>>graph(maxN);
void boyfriend(){
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
	pq.push({0,1});d[1]=0;cnt[1]=1;
	while(pq.size()){
		auto[len,u]=pq.top();pq.pop(); // trọng số len, đỉnh u
		if(len!=d[u]){continue;}
		for(edge nxt:graph[u]){
			ll v=nxt.v,w=nxt.l;
			if(d[v]>d[u]+w){
				d[v]=d[u]+w,cnt[v]=cnt[u];
				pq.push({d[v],v});
			}else if(d[v]==d[u]+w){
				cnt[v]+=cnt[u];
			}
		}
	}
}
int main(){
	if(fopen("school.inp","r")){
		freopen("school.inp","r",stdin);
		freopen("school.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>k>>u>>v>>l;
		graph[u].push_back({v,l});
		if(k==2){graph[v].push_back({u,l});}
	}
	for(ll i=1;i<=n;i++){d[i]=fuck,cnt[i]=0;}
	boyfriend();
	cout<<d[n]<<" "<<cnt[n];
}
