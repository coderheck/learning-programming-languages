#include"iostream"
using namespace std;
#define ll long long
ll demuoc(ll n){
  ll c=0;
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      c++;
      ll j=n/i;
      if(j!=i){c++;}
    }
  }
  return c;
}
int main(){
  ll n;cin>>n;cout<<demuoc(n);
}