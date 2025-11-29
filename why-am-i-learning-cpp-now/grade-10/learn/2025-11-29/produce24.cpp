#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
#define ll long long 
#define tname "produce24"
const ll maxN=100005;
ll n,m,k,c[maxN],cc[maxN],cz=0,res=0,rres=0;char vis[maxN];
vector<vector<ll>>graph(maxN);
void dfs(const ll &u,ll steps,ll sum){
	res=max(res,sum);
	if(steps==k){return;}
	for(const ll& v:graph[u]){
		if(!vis[v]){vis[v]=true;dfs(v,steps+1,sum+c[v]);vis[v]=false;}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>k;
	for(ll i=1;i<=n;i++){cin>>c[i];}
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		graph[u].push_back(v);
	}
	for(ll i=1;i<=n;i++){
		memset(vis,false,sizeof vis);
		vis[i]=true;
		dfs(i,1,c[i]);
		rres=max(rres,res);
	}
	cout<<rres;
}
