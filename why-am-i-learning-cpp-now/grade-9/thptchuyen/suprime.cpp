#include"iostream"
using namespace std;
#define ll long long
bool nto(ll n){
  if(n<=1){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
string check(ll n){
  while(n!=0){
    if(!nto(n)){return"NO";}else{n/=10;}
  }
  return"YES";
}
int main(){
  ll n;cin>>n;
  cout<<check(n);
}
