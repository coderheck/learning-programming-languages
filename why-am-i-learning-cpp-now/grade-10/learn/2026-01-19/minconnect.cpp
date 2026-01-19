#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;
#define ll long long 
#define tname "minconnect"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=100005;
ll n,m,q,w[maxN],sz[maxN],par[maxN];
ll ff(const ll &u){
	return u==par[u]?u:par[u]=ff(par[u]);
}
void uu(ll u,ll v){
	u=ff(u),v=ff(v);
	if(u!=v){
		if(sz[u]<sz[v]){u^=v,v^=u;u^=v;}
		par[v]=u,sz[u]+=sz[v];
	}
}
vector<vector<ll>>g(maxN);
bool cmpfn(const ll &a,const ll &b){return w[a]>w[b];}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){par[i]=i,sz[i]=1;}
	for(ll i=1;i<=n;i++){cin>>w[i];}
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	vector<ll>ord(n),ans(n+5,-1);
	vector<bool>ac(n+5,false);
	iota(ord.begin(),ord.end(),1); // for(ll i=0,it=1;i<=n;i++){ord[i]=it++;}
	sort(ord.begin(),ord.end(),cmpfn);
	for(const ll &u:ord){
		ac[u]=true;
		for(const ll &v:g[u]){if(ac[v]){uu(u,v);}}
		ll s=sz[ff(u)];
		ans[s]=max(ans[s],w[u]);
	}
	for(ll i=n-1;i>=1;i--){ans[i]=max(ans[i],ans[i+1]);}
	for(ll i=1;i<=n;i++){
		cout<<ans[i]<<(i<n?" ":"\n");
		cerr<<ans[i]<<(i<n?" ":"\n");
	}
}
