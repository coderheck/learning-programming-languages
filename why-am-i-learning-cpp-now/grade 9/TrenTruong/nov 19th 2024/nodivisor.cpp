#include"iostream"
using namespace std;
#define ll long long
const ll mod=1000000007;
ll n,sumd=0,suma;
void notDivsSum(){
  if(n%2==0){
    suma=((n/2)%mod)*((n+1)%mod)%mod;
  }else{
    suma=((((n+1)/2)%mod)*((n+1)%mod))%mod;
  }
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      sumd=sumd+(i+n/i)%mod;
      if(i*i==n){sumd-=i;}
    }
  }
  cout<<suma<<" "<<sumd<<" "<<(suma-sumd%mod)%mod;
}
int main(){
  cin>>n;
  notDivsSum();
}