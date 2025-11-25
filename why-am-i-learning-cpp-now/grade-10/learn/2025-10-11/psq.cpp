#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define maxP 1000000
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
bool pr[maxP+5];
void prSieve(){
    pr[0]=pr[1]=true;
    for(ll i=2;i*i<=maxP;i++){
        if(!pr[i]){
            for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
        }
    }
}
ll m,n,res=0;
int main(){
    if(fopen("psq.inp","r")){
        freopen("psq.inp","r",stdin);
        freopen("psq.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    prSieve();
    cin>>m>>n;
    vector<vector<ll>>a(m+5,vector<ll>(n+5)),dp(m+5,vector<ll>(n+5,0));
    for(ll i=1;i<=m;i++){for(ll j=1;j<=n;j++){cin>>a[i][j];}}
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            if(!pr[a[i][j]]){
                if(i==1||j==1){
                    dp[i][j]=1;
                }else{
                    dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                }
                res=max(res,dp[i][j]);
            }
        }
    }
    cout<<res*res;
}
