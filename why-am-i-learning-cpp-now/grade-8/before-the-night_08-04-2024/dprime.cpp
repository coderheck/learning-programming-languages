#include"iostream"
#define ll long long
using namespace std;
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt=false;}}
  return nt;
}
ll tcs(ll n){
  ll t=0,n1=n;
  while(n1!=0){t+=n1%10;n1/=10;}
  return t;
}
int main(){
  int n,ir=0;cin>>n;ll b[n];
  for(int i=1;i<=n;i++){
    ll a;cin>>a;
    if(nto(a) && nto(tcs(a))){b[ir]=a;ir++;}
  }
  cout<<ir<<"\n";
  for(int i=0;i<ir;i++){cout<<b[i]<<" ";}
}