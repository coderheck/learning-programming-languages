#include"iostream"
#define ll long long
using namespace std;
ll revnum(ll n){
  ll r=0;
  while(n!=0){r*=10;r+=n%10;n/=10;}
  return r;
}
bool nto(ll n){
  bool nt=true;
  if(n<2){nt=false;}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt=false;break;}}
  return nt;
}
int main(){
  ll a,b,sech=0;cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(nto(i) && nto(revnum(i))){sech++;}
  }
  std::cout<<sech;
}