#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=100005;
vector<vector<ll>>adjacentEdges(maxN);
bool vis[maxN];ll dp[maxN];
ll dfs(ll u){
	if(vis[u]){return dp[u];} // đã đi qua đỉnh u thì trả về độ dài cạnh dài nhất đến đỉnh u, tránh O(n!)
	vis[u]=true;
	for(ll j=0;j<adjacentEdges[u].size();j++){ // vì không dùng auto nên duyệt từng chỉ số j của mảng liên thông
		ll v=adjacentEdges[u][j]; // v là đỉnh thứ j liên thông với u
		dp[u]=max(dp[u],dfs(v)+1);
	}
	return dp[u];
}
ll n,m,u,v,res=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		cin>>u>>v;
		adjacentEdges[u].push_back(v);
	}
	for(ll i=1;i<=n;i++){res=max(res,dfs(i));} // duyệt từng đỉnh
	cout<<res;
}
