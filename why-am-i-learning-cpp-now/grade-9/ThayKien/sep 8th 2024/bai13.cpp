#include"iostream"
#define ll long long
using namespace std;
ll demuoc(ll n){
  ll d=0;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      d++;
      ll j=n/i;
      if(j!=i){d++;}
    }
  }
  return d;
}
int main(){
  ll n;cin>>n;
  cout<<demuoc(n);
}
