#include <iostream> 
#include <vector>
using namespace std;
#define ll long long 
#define tname "graph"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxn=100005,modn=1000000007;
vector<vector<ll>>graph(maxn);
ll n,m,cnt=0,cc=0,num[maxn],low[maxn],cut[maxn];
bool root[maxn];
void dfs(const ll& u,const ll& prev){
	num[u]=low[u]=++cnt;
	for(const ll& v:graph[u]){
		if(v!=prev){
			if(num[v]){
				low[u]=min(low[u],num[v]);
			}else{
				dfs(v,u);
				low[u]=min(low[u],low[v]);
				cut[u]+=(low[v]>=num[u]);
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
	cin>>n>>m;
	while(m--){
		ll u,v;cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for(ll i=1;i<=n;i++){
		if(!num[i]){dfs(i,0);cc++,root[i]=true;}
	}
	for(ll u=1;u<=n;u++){
		cout<<cc+cut[u]-root[u]<<"\n";
	}
}


