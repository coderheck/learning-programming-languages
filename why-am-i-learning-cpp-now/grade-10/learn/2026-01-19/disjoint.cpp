#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long 
#define tname "disjoint"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=100005;
struct edge{
	ll u,v;
	// bool operator<(const edge &rhs)const{return v>rhs.v;}
};
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
vector<vector<edge>>g(maxN);
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){par[i]=i,sz[i]=1;}
	// for(ll i=1;i<=n;i++){cin>>w[i];}
	for(ll i=1;i<=m;i++){
		ll t,u,v;cin>>t>>u>>v;
		if(t&1){uu(u,v);}else{lout(ff(u)==ff(v));}
	}
}
