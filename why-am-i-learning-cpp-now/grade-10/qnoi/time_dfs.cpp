#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "time_dfs"
const ll maxN=100005;
ll n,m,tt=0,d[maxN],f[maxN];
vector<vector<ll>>g(maxN);
void dfs(const ll& u){
	d[u]=f[u]=++tt;
	for(const ll &v:g[u]){
		if(!d[v]){dfs(v);}
	}
	f[u]=++tt;
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
		g[u].push_back(v);
	}
	for(ll i=1;i<=n;i++){if(!d[i]){dfs(i);}}
	for(ll i=1;i<=n;i++){cout<<d[i]<<" "<<f[i]<<"\n";}
}
