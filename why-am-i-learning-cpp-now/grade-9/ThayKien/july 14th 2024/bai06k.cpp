#include"iostream"
#include"vector"
using namespace std;
#define ll long long
bool dx(ll n){
  ll r=0,n1=n;
  while(n!=0){r*=10;r+=n%10;n/=10;}
  return(r==n1);
}
bool isPerfect(ll x){
  ll t=0;
  for(ll i=1;i<=x/2;i++){if(x%i==0){t+=i;}}
  return(t==x);
}
int main(){
  ll n,tchan=0,thh=0;cin>>n;vector<ll>doixung;
  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    if(a%2==0){tchan+=a;}
    if(dx(a)&&a>9){doixung.push_back(a);}
    if(isPerfect(a)){thh+=a;}
  }
  cout<<tchan<<"\n";
  for(ll i:doixung){cout<<i<<" ";}
  cout<<"\n"<<thh;
}