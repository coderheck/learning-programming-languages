#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
bool nto(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){nt=false;}
  }
  return nt;
}
bool cp(ll n){
  ll rac=sqrt(n);
  return (rac*rac==n);
}
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    ll a;cin>>a;
    if(cp(a)&&nto(sqrt(a))){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}