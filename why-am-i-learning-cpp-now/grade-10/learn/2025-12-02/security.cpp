#include <iostream> 
#include <vector>
using namespace std;
#define ll long long 
#define tname "security"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxn=50005;
vector<vector<ll>>graph(maxn);
ll n,m,cnt=0,scc=0,num[maxn],low[maxn],cut[maxn];
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
void tarjan(const ll& u){
	num[u]=low[u]=++cnt;
	for(const ll &v:graph[u]){
		if(!num[v]){ // chưa được duyệt
			tarjan(v);
			low[u]=min(low[u],low[v]);
		}else if(inStack[v]){ // back-edge tới v đang trong stack
			low[u]=min(low[u],num[v]);
		}
	}
	if(low[u]==num[u]){
		scc++;
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		graph[u].push_back(v);
	}
	
}

