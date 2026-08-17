#include <iostream>
using namespace std;
#define tname "army"
#define ll long long
const ll modN=1000000007;
ll m,n,f[2005];
ll fastpowmod(ll a,ll b){
    if(a%modN==0){return 0;}
    ll res=1;
    while(b){
        if(b&1){res=(res*a)%modN;}
        b>>=1,a=(a*a)%modN;
    }
    return res;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>m>>n;
    f[0]=1,f[1]=0;
    for(ll i=2;i<=n;i++){f[i]=(((f[i-1]+f[i-2])%modN)*(i-1))%modN;}
    ll res=1;
    for(ll i=1;i<=n;i++){res=(res*i)%modN;}
    // for(ll i=2;i<=m;i++){res=(res*f[n])%modN;}
    res=(res*fastpowmod(f[n],m-1))%modN;
    cout<<res;
}