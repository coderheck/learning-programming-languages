#include"iostream"
using namespace std;
#define ll long long
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
ll revnum(ll n){
  ll r=0;
  while(n!=0){r*=10;r+=n%10;n/=10;}
  return r;
}
int main(){
  ll a,b,c=0;cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(nto(i)&&nto(revnum(i))){c++;}
  }
  cout<<c;
}