#include <functional>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define ll long long 
#define taskname "roads"
const ll maxN=105;
const ll inff=100000000007;
struct edge{
	ll v,w,c; // end vertex, length, cost
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
ll T,k,n,r,s,d,l,t;
void dickstra(const ll& fin,const vector<vector<edge>>graph){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	vector<vector<ll>>dp(n+5,vector<ll>(k+5,inff)); // dp[next_vertex][cost] = min dist to vertex 
	pq.push({1,0,0}),dp[1][0]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w,cu=pq.top().c;pq.pop();
		if(du!=dp[u][cu]){continue;}
		if(u==fin){cout<<du<<"\n";return;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,nd=du+nx.w,nc=cu+nx.c;
			if(nc<=k&&nd<dp[v][nc]){
				dp[v][nc]=nd;pq.push({v,nd,nc});
			}
		}
	}
	cout<<"-1\n";
}
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		// freopen(taskname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
		cin>>k>>n>>r;
		vector<vector<edge>>graph(n+5);
		while(r--){
			cin>>s>>d>>l>>t;
			graph[s].push_back({d,l,t});
		}
		dickstra(n,graph);
	}
}
