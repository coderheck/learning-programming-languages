#include"iostream"
using namespace std;
#define ll long long
bool nto(ll n){
  bool nt=true;
  if(n<2){nt=false;}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt=false;break;}}
  return nt;
}
ll tcs(ll n){
  ll t=0;
  while(n!=0){t*=10;t+=n%10;n/=10;}
  return t;
}
int main(){
  ll n,res=0,maxtcs=0;cin>>n;
  while(n--){
    ll a;cin>>a;
    if(nto(a)){if(tcs(a)>maxtcs){maxtcs=tcs(a);res=a;}}
  }
  cout<<res;
}