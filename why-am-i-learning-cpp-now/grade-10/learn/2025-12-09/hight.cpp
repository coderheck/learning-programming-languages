#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;
#define ll long long 
#define tname "hight"
const ll maxN=100005;
ll n,m,s,t;
struct edge{ll v,w;};
vector<vector<edge>>g(maxN);
bool dfs(const ll &u,const ll &k,vector<bool>&vis){
	vis[u]=true;
	if(u==t){return true;}
	for(const edge &nx:g[u]){
		if(!vis[nx.v]&&nx.w>=k){
			vis[nx.v]=true;
			if(dfs(nx.v,k,vis)){return true;}
		}
	}
	return false;
}
void dfs_raytracing(const ll &u,const ll &p,const ll &k,vector<bool>&vis,vector<ll>&par){
	par[u]=p;
	for(const edge &nx:g[u]){
		if(!vis[nx.v]&&nx.w>=k){
			vis[nx.v]=true;
			dfs_raytracing(nx.v,u,k,vis,par);
		}
	}
}
bool check(const ll &m){
	vector<bool>vis(n+5,false);
	return dfs(s,m,vis);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	for(ll i=1;i<=m;i++){
		ll u,v,w;cin>>u>>v>>w;
		g[u].push_back({v,w});
		g[v].push_back({u,w});
	}
	ll l=1,r=1000000000,res=0;
	while(l<=r){
		ll m=l+r>>1;
		if(check(m)){res=m,l=m+1;}else{r=m-1;}
	}
	if(!res){cout<<res;return 0;}
	cout<<res<<"\n";
	vector<bool>vis(n+5,false);
	vector<ll>par(n+5);
	dfs_raytracing(s,-1,res,vis,par);
	stack<ll>st;
	for(ll u=t;u!=-1;u=par[u]){
		st.push(u);
		if(u==s){break;}
	}
	cout<<st.size()<<"\n";
	while(st.size()){cout<<st.top()<<" ";st.pop();}
}
