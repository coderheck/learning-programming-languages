#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=10005;
ll n,m,u,v,res=0;
bool vis[maxN];
vector<vector<ll>>adj(maxN);
ll dfs(ll u){
	if(vis[u]){return 0;} // đã đi qua -> không tính nữa
	vis[u]=true;
	ll ans=1;
	for(ll v:adj[u]){ans+=dfs(v);} // tính số đỉnh liên thông với v
	return ans;
	vis[u]=true;
	for(ll v:adj[u]){
		res++;dfs(v);
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<ll>connected;
	for(ll i=1;i<=n;i++){ // duyệt từng thành phố 
		if(!vis[i]){connected.push_back(dfs(i));}
	}
	sort(connected.rbegin(),connected.rend());
	res=connected[0]+(connected.size()>1?connected[1]:0);
	cout<<res;
}
