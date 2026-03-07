#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
#define tname "solocphat"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<x<<"\n";cerr<<x<<"\n";
void rvArr(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll dp[20][2][2][2],ds[20],dz=0;
ll sol(ll pos,bool smla,bool smlb,bool muon){
    if(pos==dz){return !muon;}
    if(dp[pos][smla][smlb][muon]!=-1){return dp[pos][smla][smlb][muon];}
    int lim=smla?ds[pos]:9;ll res=0;
    for(int a=0;a<=lim;a++){
        if(a==6||a==8){continue;}
        if(smla&&a>lim){break;}
        int na=smla&&(a==lim),b=lim-a-muon,nb=muon;
        if(b<0){b+=10,nb=1;}else{nb=0;}
        if(b==6||b==8){continue;}
        int nt=smlb&&(b==lim);
        res+=sol(pos+1,na,nt,nb);
    }
    return dp[pos][smla][smlb][muon]=res;
}
ll n,x;
void f(){
    if(n<=0){lout("0");}
    dz=0,x=n;
    while(x){ds[dz++]=x%10;x/=10;}
    rvArr(ds,dz);
    memset(dp,-1,sizeof(dp));
    lout(((n>>1)-sol(0,1,1,0)));
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    while(cin>>n){f();}
}
