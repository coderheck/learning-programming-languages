#include"stdio.h"
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
ll a,b,c,d,gc;
int main(){
  scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
  gc=lcm(c,d);
  printf("%lld",b/gc-(a-1)/gc);
}