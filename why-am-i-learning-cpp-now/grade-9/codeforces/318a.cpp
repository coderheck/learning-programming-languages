#include"stdio.h"
#define ll long long
ll n,k,l;
int main(){
  scanf("%lld%lld",&n,&k);
  l=(n+1)/2;
  if(k<=l){
    printf("%lld",1+2*(k-1));
  }else{
    printf("%lld",2+2*(k-l-1));
  }
}