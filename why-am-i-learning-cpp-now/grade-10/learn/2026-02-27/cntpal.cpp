#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define tname "cntpal"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=5005,bb=31,modN=1000000007;
ll n,q,x,y,res=0,h1[maxN],h2[maxN],p[maxN],dp[maxN][maxN];
string s;
bool cmpHash(const ll &l,const ll &r){
    return ((h1[r]-h1[l-1]*p[r-l+1])%modN+modN)%modN
        == ((h2[l]-h2[r+1]*p[r-l+1])%modN+modN)%modN;
}
void subsub(){
    for(ll r=1;r<=n;r++){
        for(ll l=r;l>=1;l--){
            dp[l][r]+=dp[l+1][r]+cmpHash(l,r);
        }
        for(ll l=1;l<=r;l++){
            dp[l][r]+=dp[l][r-1];
        }
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>s>>q;n=s.size();s="%"+s;
    p[0]=1,h1[0]=h2[n]=0;
    for(ll i=1;i<=n;i++){
        p[i]=(p[i-1]*bb)%modN;
        h1[i]=(h1[i-1]*bb+s[i]-'a')%modN;
    }
    for(ll i=n;i>=1;i--){
        h2[i]=(h2[i+1]*bb+s[i]-'a')%modN;
    }
    subsub();
    while(q--){
        cin>>x>>y;
        // res=0;
        // for(ll i=l;i<=r;i++){
        //     for(ll j=i;j<=r;j++){
        //         if(cmpHash(i,j)){res++;}
        //     }
        // }
        lout(dp[x][y]);
    }
}
