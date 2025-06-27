#include"iostream"
using namespace std;
#define ll long long
ll a,b,sech=0;bool pr[10000000];
void eratosthenes_sieve(){
  for(int i=2;i<=10000000;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(ll i=2;i*i<=10000000;i++){
    if(pr[i]){
      for(ll j=2;i*j<=10000000;j++){pr[i*j]=false;}
    }
  }
}
ll revN(ll n){
  ll ret=0;
  while(n!=0){ret*=10;ret+=(n%10);n/=10;}
  return ret;
}
int main(){
  eratosthenes_sieve();
  cin>>a>>b;
  for(ll i=a;i<=b;i++){
    if(pr[i]&&pr[revN(i)]){sech++;}
  }
  cout<<sech;
}