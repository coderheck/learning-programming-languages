#include"iostream"
using namespace std;
#define ll long long
bool nto(ll n){
  bool nt=true;
  if(n<2){nt=false;}
  for(ll i=2;i*i<=n;i++){if(n%i==0){nt=false;break;}}
  return nt;
}
bool sech(ll n){
  while(nto(n)){
    n/=10;
  }
  return n==0;
}
int main(){
  ll i,res=0;cin>>i;
  while(i--){
    ll a;cin>>a;
    if(sech(a) && a>res){res=a;}
  }
  std::cout<<res;
}