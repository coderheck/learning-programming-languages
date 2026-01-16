#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define tname "festival"
#define ll long long
#define debug(x) cout<<(x)<<" ";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=505,inff=1000000000007;
ll n,m,s,x,a[maxN][maxN],sum[maxN][maxN],zz[maxN][maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin>>n>>m>>s>>x;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            cin>>a[i][j];
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
            zz[i][j]=zz[i-1][j]+zz[i][j-1]-zz[i-1][j-1]+a[i][j]==0;
        }
    }
    // cout<<sum[u][v]-sum[i-1][j]-sum[i][j-1]+sum[i-1][j-1];
    ll res=0;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){ // (i,j) góc trên bên trái
            for(ll u=i;u<=n;u++){
                for(ll v=j;v<=m;v++){ // (u,v) góc dưới bên phải
                    if(zz[u][v]-zz[i-1][v]-zz[u][j-1]+zz[i-1][j-1]<=x && (u-i+1)*(v-j+1)<=s){
                        res=max(res,sum[u][v]-sum[i-1][v]-sum[u][j-1]+sum[i-1][j-1]);
                    }
                }
            }
        }
    }
    cout<<(!res?-1:res);
}
