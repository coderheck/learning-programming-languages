#include"iostream"
using namespace std;
typedef long long ll;
bool isprime(ll n){
  bool nt=true;
  if(n<=1){nt=false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){nt=false;break;}
  }
  return nt;
}
int main(){
  ll a;cin>>a;if(isprime(a)){cout<<"YES";}else{cout<<"NO";}
}