#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
#define mod 1000000007
ll fastpowmod(ll a,ll b){
  if(a%mod==0){return 0;}
  ll res=1;
  while(b>0){
    if(b&1){res=(res*a)%mod;}
    a=(a*a)%mod;b>>=1;
  }
  return res;
}
ll n,a[100005],s=0,tm;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  for(ll i=1;i<=n;i++){cin>>a[i];}
  for(ll i=1;i<=n;i++){
    for(ll j=i+1;j<=n;j++){
      tm=abs(a[i]+a[j]);
      s+=fastpowmod(tm,3);
    }
  }
  cout<<s;
}
