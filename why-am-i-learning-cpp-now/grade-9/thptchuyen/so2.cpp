#include"stdio.h"
#define ll long long
ll n,res;
void tonguoc(){
  res=1+n;
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){
      res+=i;
      ll j=n/i;
      if(j!=i){res+=j;}
    }
  }
  printf("%lld",res);
}
int main(){
  scanf("%lld",&n);
  tonguoc();
}