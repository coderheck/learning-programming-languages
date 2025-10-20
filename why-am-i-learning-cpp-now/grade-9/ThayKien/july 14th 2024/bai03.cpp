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
bool bacthang(ll n){
if (n < 10) return false; 
  int prev_digit = 10; 
  while (n > 0) {
    int current_digit = n % 10;
    if (current_digit >= prev_digit) return false;
    prev_digit = current_digit;
    n /= 10;
  }
  return true;
}
int main(){
  ll n,res=0;cin>>n;
  for(ll i=1;i<=n;i++){
    ll a;cin>>a;
    if(nto(a)&&bacthang(a)){if(a>res)res=a;}
  }
  cout<<res;
}