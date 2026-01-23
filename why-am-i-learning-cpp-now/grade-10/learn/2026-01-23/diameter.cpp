#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "diameter"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=200005;
ll n,a[maxN],root;
bool vis1[maxN],vis2[maxN];
vector<vector<ll>>g(maxN);
vector<ll>d={0,0};
void dfs(const ll &u,const ll cdist,bool *vis){
	if(vis[u]){return;}
	if(d[0]<cdist){d[0]=cdist,d[1]=u;}
	vis[u]=true;
	for(const ll &v:g[u]){
		if(!vis[v]){
			dfs(v,cdist+1,vis);
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	// for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		ll p;cin>>p;
		if(!p){
			root=i;continue;
		}
		g[p].push_back(i);
		g[i].push_back(p);
	}
	dfs(root,0,vis1);
	ll e1=d[1];d={0,0};
	dfs(e1,0,vis2);
	lout(d[0]);
}

