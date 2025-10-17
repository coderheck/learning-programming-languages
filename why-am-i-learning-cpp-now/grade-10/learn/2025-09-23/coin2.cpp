#include<iostream>
#include<vector>
using namespace std;
#define ll long long
const ll maxN=1000005,modN=1000000007;
ll n,x,a[maxN],dp[maxDp];
int main(){
	cin.tie(0)->sync_with_stdio(0);
    cin>>n>>x;
//    vector<vector<ll>>dp(n+5,vector<ll>(x+5));
    dp[0]=1;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    for(ll i=1;i<=n;i++){
        for(ll j=a[i];j<=x;j++){
            dp[j]=(dp[j]%modN+dp[j-a[i]]%modN)%modN;
        }
    }
    cout<<dp[x];
}
