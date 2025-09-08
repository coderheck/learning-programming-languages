#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n,k;cin>>n>>k;
  ll a[k+1];
  map<ll,ll>cnt;
  for(ll i=1;i<=k;i++)
  {
    cin>>a[i];
    cnt[a[i]]=1;
    dp[a[i]]=0;
  }
  ll dp[n+1];
  dp[1]=1;
  for(ll i=1;i<=k;i++)
  {
    if(
    dp[i]=dp[i-1]+dp[i-2];
    if(cnt[i])dp[i]
  }
  cout<<dp[n];
}
