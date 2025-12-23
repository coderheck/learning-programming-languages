// https://www.geeksforgeeks.org/dsa/number-shortest-paths-unweighted-directed-graph/

#include <stdio.h>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
#define tname "stable"
const ll maxN=10005,inff=10000000007;
ll n,m,s,res=0;
umap<ll,umap<ll,bool>>mark;
vector<ll>c(maxN,0);
vector<vector<ll>>g(maxN);
void bfs(){ // đường đi ngắn nhất trên đồ thị không trọng số 
	vector<ll>d(n+5,inff);
	queue<ll>q;
	q.push(s),d[s]=0,c[s]=1;
	while(q.size()){
		ll u=q.front();q.pop();
		for(const ll &v:g[u]){
			if(d[v]>d[u]+1){
				q.push(v);
				d[v]=d[u]+1,c[v]=c[u];
			}else if(d[v]==d[u]+1){
				c[v]+=c[u];
			}
			if(c[v]>2){c[v]=2;} // tránh tràn longlong
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	scanf("%lld%lld%lld",&n,&m,&s);
	for(ll i=1;i<=m;i++){
		ll u,v;
		scanf("%lld%lld",&u,&v);
		if(!mark[u][v]){
			mark[u][v]=true;
			g[u].push_back(v);
		}
	}
	bfs();
	for(ll i=1;i<=n;i++){
		res+=i!=s&&c[i]>=2;
	}
	printf("%lld",res);
}
