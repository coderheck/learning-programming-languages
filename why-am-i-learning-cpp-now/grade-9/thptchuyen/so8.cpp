#include"stdio.h"
#define ll long long
ll a,b,c;
void fastpowmod(){
  long long res=1; a%=c;
  if(a==0){printf("0");return;}
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1; a=(a*a)%c;
  }
  printf("%lld",res);
}
int main(){
  scanf("%lld%lld%lld",&a,&b,&c);
  fastpowmod();
}