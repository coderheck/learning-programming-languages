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
ll m,n,k,a[maxN][maxN],col[maxN][maxN],diag[maxN][maxN];
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
            col[i][j]=col[i-1][j]+x;
            diag[i][j]=diag[i-1][j-1]+x;
        }
    }
    ll res=0;
    for(ll i=1;i+k-1<=m;i++){
        ll cur=0;
        for(ll t=0;t<k;t++){
            cur+=diag[i+t][1+t]-diag[i+t-1][0];
        }
        res=max(res,cur);
        for(ll j=2;j+k-1<=n;j++){
            cur-=col[i+k-1][j-1]-col[i-1][j-1];
            cur+=diag[i+k-1][j+k-1]-diag[i-1][j-1];
            res=max(res,cur);
        }
    }
    lout(res)
}
