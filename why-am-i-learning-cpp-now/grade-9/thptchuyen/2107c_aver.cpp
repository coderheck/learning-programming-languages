#include"stdio.h"
#define ll long long
ll a,b;
int main(){
  scanf("%lld%lld",&a,&b);
  printf("%lld",(a&b)+((a^b)>>1));
}