#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "games"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=5005;
// struct node{ll p,t,a;}a[maxN];
ll n,d,ans=0,p[maxN],t[maxN],a[maxN],dp[maxN][maxN];
bool checksub3=true;
void dfs(const ll &i,const ll &tt,const ll &sc){
    if(i>n){ans=max(ans,sc);return;}
    dfs(i+1,tt,sc);
    for(ll k=1;;k++){
        ll nt=tt+p[i]+k*t[i];
        if(nt>d){break;}
        dfs(i+1,nt,sc+k*a[i]);
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>d;
    for(ll i=1;i<=n;i++){
        cin>>p[i]>>t[i]>>a[i];
        if(p[i]&&checksub3){checksub3=false;}
    }
    if(n==1){
        if(p[1]<=d){d=(d-p[1])/t[1]*a[1];}else{d=0;}
        lout(d);
        return 0;
    }else if(checksub3){
    // knapsack DP, a[i] == val[i] và t[i] == w[i]
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=d;j++){
                dp[i][j]=dp[i-1][j];
                if(t[i]<=j){
                    dp[i][j]=max(dp[i-1][j],dp[i][j-t[i]]+a[i]);
                }
            }
        }
        lout(dp[n][d]);
    }else if(n<=10){
        dfs(1,0,0);
        lout(ans);
    }
}
