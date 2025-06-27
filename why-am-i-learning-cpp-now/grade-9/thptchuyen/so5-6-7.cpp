#include"stdio.h"
#define ll long long
ll a,b,c,d;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int main(){
  scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
  /* printf("%lld",(b/c-a/c));                                  // so5  */
  /* printf("%lld",b/lcm(c,d)-a/lcm(c,d));                      // so6  */
  printf("%lld",(b/c-a/c)+(b/d-a/d)-(b/lcm(c,d)-a/lcm(c,d)));   // so7
}