#include <iostream>
using namespace std;
#define tname "liq"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=1005;
ll n,res=0,a[maxN],dp[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    dp[1]=1;
    for(ll i=2;i<=n;i++){
        dp[i]=1;
        for(ll j=1;j<i;j++){
            if(a[j]<a[i]){dp[i]=max(dp[i],dp[j]+1);}
        }
    }
    for(ll i=1;i<=n;i++){res=max(res,dp[i]);}
    lout(res);
}
