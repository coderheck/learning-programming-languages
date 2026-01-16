#include <iostream>
#include <vector>
using namespace std;
#define tname "triangle"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(a) cout<<(a);cerr<<(a);
const ll maxN=2005;
ll m,n,k,a[maxN][maxN],dp[maxN][maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>m>>n>>k;
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            ll x;cin>>x;
            dp[i][j]=dp[i][j-1]+x;
        }
    }
    ll res=0;
    for(ll i=1;i+k-1<=m;i++){
        for(ll j=1;j+k-1<=n;j++){
            ll sum=0;
            for(ll x=0;x<k;x++){
                sum+=dp[i+x][j+x]-dp[i+x][j-1];
            }
            res=max(res,sum);
        }
    }
    lout(res)
}
