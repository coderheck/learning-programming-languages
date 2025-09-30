#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define lol 1000000007
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll n,m;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    vector<ll>a(n+5);
    vector<vector<ll>>dp(n+5,vector<ll>(m+5,0));
    for(ll i=1;i<=n;i++){cin>>a[i];}
    dp[0][0]=0;
    for(ll i=0;i<=n;i++){
        dp[i][0]=0;
        for(ll j=1;j<=m;j++){
            if(!i){dp[i][j]=lol;continue;}
            dp[i][j]=dp[i-1][j];
            if(j>=a[i]&&dp[i][j-a[i]]+1<dp[i][j]){
                dp[i][j]=dp[i][j-a[i]]+1;
            }
        }
    }
//    for(ll i=0;i<=n;i++){
//        for(ll j=0;j<=m;j++){
//            cout<<dp[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    if(dp[n][m]>=lol){cout<<"0";return 0;}
    cout<<dp[n][m];
}
