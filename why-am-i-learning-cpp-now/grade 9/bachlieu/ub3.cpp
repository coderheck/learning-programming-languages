#include"stdio.h"
#define ll long long
ll n,j,t=0;
int main(){
  scanf("%lld",&n);
  for(ll i=1;i*i<=n;i++){
    if(n%i==0){
      t+=i;j=n/i;
      if(j!=i){t+=j;}
    }
  }
  printf("%lld",t);
}