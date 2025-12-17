#include <stdio.h>
#define ll long long
#define tname "dsu_c"
const ll maxN=100005;
ll n,k,par[maxN],sz[maxN],cc[maxN],laz[maxN];
char type[4];
void make(const ll& u){par[u]=u,sz[u]=1,cc[u]=laz[u]=0;}
ll ffind(const ll &u){
    return u==par[u]?u:par[u]=ffind(par[u]),cc[u]=laz[par[u]];
}
void join(const ll& u,const ll &v){
    ll x=ffind(u),y=ffind(v);
    if(x!=y){
        if(sz[x]<sz[y]){ll z=x;x=y,y=z;}
        par[y]=x,sz[x]+=sz[y],cc[x]+=cc[y];
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    scanf("%lld%lld",&n,&k);
    for(ll i=1;i<=n;i++){make(i);}
    while(k--){
        scanf("%s",&type[0]);
        if(type[0]=='g'){
            ll u;scanf("%lld",&u);
            printf("%lld\n",cc[ffind(u)]);
        }else{
            ll u,v;scanf("%lld%lld",&u,&v);
            if(type[0]=='j'){
                join(u,v);
            }else{
                cc[ffind(u)]+=v;
            }
        }
    }
}
