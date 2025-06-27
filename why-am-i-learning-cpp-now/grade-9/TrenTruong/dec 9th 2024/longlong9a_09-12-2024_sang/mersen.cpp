#include"iostream"
using namespace std;
#define ll long long
ll n,ans=-1;
bool ispr(ll x){
  if(x<2){return false;}
  for(ll i=2;i*i<=x;i++){
    if(x%i==0){return false;}
  }
  return true;
}
ll fastpowminus1(ll a,ll b){
  ll ans=1;
  while(b>0){
    if(b%2==1){ans=(ans*a);}
    b/=2;a=a*a;
  }
  return ans-1;
}
int main(){
  cin>>n;
  for(ll k=2;;k++){
    ll mK=fastpowminus1(2,k);
    if(mK>=n){break;}
    if(ispr(mK)){ans=mK;}
  }
  cout<<ans;
}