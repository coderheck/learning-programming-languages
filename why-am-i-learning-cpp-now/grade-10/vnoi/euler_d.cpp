#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=200005;
ll n,c[maxN],res=0;
vector<vector<ll>>graph(maxN);
void dfs(const ll &u,vector<bool>&vis,umap<ll,ll>&cnt){
	vis[u]=true,res+=!cnt[c[u]],cnt[c[u]]++;
	for(const ll& v:graph[u]){
		if(!vis[v]){dfs(v,vis,cnt);}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>c[i];}
	for(ll i=1;i<n;i++){
		ll u,v;cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for(ll i=1;i<=n;i++){
		vector<bool>vis(n+5,false);
		umap<ll,ll>cnt;
		res=0;
		dfs(i,vis,cnt);
		cout<<res<<" ";
	}
}
