#include"stdio.h"
#include"math.h"
using namespace std;
#define ll long long
int n,res=0;ll a;
bool ispr(ll n){
  if(n<2){return false;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
bool SecureContainProtect(){
  ll j=sqrt(a);
  return(j*j==a&&ispr(j));
}
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%lld",&a);
    res+=SecureContainProtect();
  }
  printf("%d",res);
}