#include <iostream>
#include <cmath>
using namespace std;
#define tname "kancestor"
#define ll long long
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1000005,mL=20;
ll n,k,m,ee=1,up[maxN][mL];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k>>m;ee=log2(n)+1;
    up[1][0]=-1;
    for(ll i=2;i<=n;i++){up[i][0]=i>>1;}
    for(ll e=1;e<ee;e++){
        for(ll u=1;u<=n;u++){
            ll m=up[u][e-1];
            up[u][e]=(m==-1?-1:up[m][e-1]);
        }
    }
    for(ll e=ee-1;e>=0;e--){
        if((1<<e)&k){
            if(m==-1){break;}
            m=up[m][e];
        }
    }
    lout(m);
}
