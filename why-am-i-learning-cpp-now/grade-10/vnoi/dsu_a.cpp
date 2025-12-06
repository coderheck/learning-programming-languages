#include <iostream>
using namespace std;
#define ll long long 
#define tname "dsu_a"
const ll maxN=100005;
ll n,m,u,v,z,par[maxN],sz[maxN];
string type;
void makeset(const ll &v){par[v]=v,sz[v]=1;}
ll findset(const ll &v){
	return v==par[v]?v:par[v]=findset(par[v]);
}
void unioset(const ll &a,const ll &b){
	ll x=findset(a),y=findset(b);
	if(x!=y){
		if(sz[x]<sz[y]){z=x;x=y,y=z;}
		par[y]=x,sz[x]+=sz[y];
	}
}
int main(){
	for(ll i=1;i<maxN;i++){makeset(i);}
	cin>>n>>m;
	while(m--){
		cin>>type>>u>>v;
		if(type[0]=='u'){
			unioset(u,v);
		}else{
			cout<<(findset(u)==findset(v)?"YES\n":"NO\n");
		}
	}
}

