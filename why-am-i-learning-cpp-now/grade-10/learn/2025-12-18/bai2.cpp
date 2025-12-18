#include<iostream>
#include<vector>
using namespace std;
#define ll long long 
#define tname "bai2"
const ll maxN=1000005,modN=1000000007;
ll n,dp[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    dp[0]=1,dp[1]=2,dp[2]=3;
    for(ll i=3;i<=n;i++){
        dp[i]=(dp[i-1]%modN+dp[i-2]%modN)%modN;
    }
    cout<<dp[n];
}