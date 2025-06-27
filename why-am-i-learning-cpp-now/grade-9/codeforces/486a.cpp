#include"stdio.h"
#define ll long long
ll n;
int main(){
  scanf("%lld",&n);
  printf("%lld",(n&1)?-n/2-1:n/2);
}