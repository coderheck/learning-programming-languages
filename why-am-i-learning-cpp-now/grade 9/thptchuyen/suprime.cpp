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
int main(){
  ll n;cin>>n;
  while(n!=0){
    if(!nto(n)){cout<<"NO";}else{n/=10;}
  }
  cout<<"YES";
}