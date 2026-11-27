#include <iostream>
#include <utility>
using namespace std;
#define tname "c11bc2"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=10005,inff=1ll<<62;
ll par[maxn],sz[maxn];
ll ff(const ll &u){return u==par[u]?u:par[u]=ff(par[u]);}
void uu(ll u,ll v){
	u=ff(u),v=ff(v);
	if(u==v){return;}
	if(sz[u]<sz[v]){swap(u,v);}
	par[v]=u;
	sz[u]+=sz[v];
}
ll n,m;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	for(ll i=1;i<=10000;i++){par[i]=i,sz[i]=1;}
	cin>>n>>m;
	for(ll i=2,x,k;i<=n;i++){
		cin>>x>>k;
		if(k==2){continue;}
		uu(x,i);
	}
	for(ll i=1,u,v;i<=m;i++){
		cin>>u>>v;
		if(ff(u)!=ff(v)){lout("YES");}else{lout("NO");}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
