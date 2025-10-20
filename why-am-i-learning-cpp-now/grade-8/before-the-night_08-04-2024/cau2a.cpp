#include"iostream"
#define ll long long
using namespace std;
ll tcs(ll n){
  ll t=0,n1=n;
  while(n1!=0){t+=n1%10;n1/=10;}
  return t;
}
ll tcsbac3(ll n){
  ll t=0,n1=n;
  while(n1!=0){t+=(n1%10)*(n1%10)*(n1%10);n1/=10;}
  return t;
}
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt=false;break;}}
  return nt;
}
int main(){
  ll n;cin>>n;ll tongcs=tcs(n);
  cout<<tcsbac3(n)<<" "<<(nto(n)==1 && nto(tongcs)==1);
}