#include <iostream>
#include <string>
using namespace std;
#define ll long long 
#define tname "dsu_b"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=300005;
ll n,m,u,v,z,par[maxN],sz[maxN],mn[maxN],mx[maxN];
string type;
void makeset(const ll &v){par[v]=mn[v]=mx[v]=v,sz[v]=1;}
ll findset(const ll &v){
	return v==par[v]?v:par[v]=findset(par[v]);
}
void unioset(const ll &a,const ll &b){
	ll x=findset(a),y=findset(b);
	if(x!=y){
		if(sz[x]<sz[y]){z=x;x=y,y=z;}
		par[y]=x,sz[x]+=sz[y],
		mx[x]=max(mx[x],mx[y]),mn[x]=min(mn[x],mn[y]);
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	for(ll i=1;i<maxN;i++){makeset(i);}
	cin>>n>>m;
	while(m--){
		cin>>type>>u;
		if(type[0]=='u'){
			cin>>v;
			unioset(u,v);
		}else{
			ll root=findset(u);
			cout<<mn[root]<<" "<<mx[root]<<" "<<sz[root]<<"\n";
		}
	}
}


