#include <iostream> 
#include <stack>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
vector<vector<ll>>graph(maxN);
ll n,m,cnt=0,edge=0,d=0,num[maxN],low[maxN];
bool node[maxN];
stack<ll>st;
void dfs(const ll& u,const ll& prev){
	ll child=0;
	num[u]=low[u]=++cnt;
	for(const ll& v:graph[u]){
		if(v!=prev&&num[v]){
			low[u]=min(low[u],num[v]);
		}else{
			dfs(v,u);
			child++;
			low[u]=min(low[u],low[v]);
			edge+=(low[v]>=num[v]);
			if(u==prev){
				if(child>=2){node[u]=true;}
			}else if(low[v]>=num[u]){
				node[u]=true;
			}
		}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for(ll i=1;i<=n;i++){
		if(!num[i]){dfs();}
	}
	cout<<tpltm;
}

