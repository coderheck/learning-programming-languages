#include<iostream>
using namespace std;
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define ll long long
ll k,l,m,maxA=0,a[100005];
bool dp[1000005];
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>k>>l>>m;
  // cin>>m>>k>>l;
  for(ll i=1;i<=m;i++){cin>>a[i];if(a[i]>maxA){maxA=a[i];}}
  dp[0]=0;
  for(ll i=1;i<=maxA;i++){
    dp[i]=(i>=1&&!dp[i-1])||(i>=k&&!dp[i-k])||(i>=l&&!dp[i-l]);
  }
  for(ll i=1;i<=m;i++){cout<<(dp[a[i]]?"A":"B");}
}
