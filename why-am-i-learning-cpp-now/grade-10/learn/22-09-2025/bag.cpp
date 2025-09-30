#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
const ll lol=1000000007;
ll n,m;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    vector<ll>w(n+5);vector<ll>v(n+5);
    vector<ll>dp(m+5,0);
    for(ll i=1;i<=n;i++){cin>>w[i]>>v[i];}
    for(ll i=1;i<=w.size();i++){
        for(ll j=m;j>=w[i-1];j--){
            dp[j]=max(dp[j],dp[j-w[i-1]]+v[i-1]);
        }
    }
    cout<<dp[m];
}
