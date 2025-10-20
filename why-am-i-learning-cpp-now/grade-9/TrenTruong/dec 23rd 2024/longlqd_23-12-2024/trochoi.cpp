///Made by MY COCK
#include<iostream>
#include"algorithm"
#include"climits"
#define ll long long
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
ll a[1000005],b[1000005],ans=inf;
ll min(ll a,ll b){return(a<b)?a:b;}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){cin>>b[i];}
  sort(a,a+n);
  sort(b,b+n,greater<int>());
  for(int i=0;i<n;i++){
    ll x=lower_bound(b,b+n,-a[i])-b;
    ans=min(ans,1ll*abs(a[i]+b[x]));
  }
  cout<<ans;
}