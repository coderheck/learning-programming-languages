#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
bool nto(ll n){
  if(n<2){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
bool cp(ll n){
  return((int)sqrt(n)*(int)sqrt(n)==n);
}
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    ll a;cin>>a;
    if(cp(a)&&nto((int)sqrt(a))){cout<<"YES\n";}else{cout<<"NO\n";}
  }
}