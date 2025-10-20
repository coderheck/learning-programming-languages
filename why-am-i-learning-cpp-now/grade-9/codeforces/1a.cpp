#include"stdio.h"
#define ll long long
unsigned ll n,m,a;
int main(){
  scanf("%lld%lld%lld",&n,&m,&a);
  printf("%lld",(n/a+(n%a!=0))*(m/a+(m%a!=0)));
}