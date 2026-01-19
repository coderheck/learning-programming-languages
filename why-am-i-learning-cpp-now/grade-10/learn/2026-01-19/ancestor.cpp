#include <iostream>
#include <cmath>
using namespace std;
#define ll long long
#define tname "ancestor"
#define txp(x) (1<<(x))
const ll maxN=100005,maxLog=17;
ll n,m,par[maxN],up[maxN][maxLog];
void prep(){
    par[1]=1;
    for(ll u=1;u<=n;u++){up[u][0]=par[u];}
    for(ll e=1;e<=log2(n);e++){
        for(ll u=1;u<=n;u++){
            up[u][e]=up[up[u][e-1]][e-1];
        }
    }
}
ll anc_k(ll u,const ll &k){
    for(ll e=0;txp(e)<=k;e++){
        if(k>>e&1){u=up[u][e];}
    }
    return u;
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=2;i<=n;i++){cin>>par[i];}
    prep();
    while(m--){
        ll v,k;cin>>v>>k;
        cout<<anc_k(v,k)<<"\n";
        cerr<<anc_k(v,k)<<"\n";
    }
}
