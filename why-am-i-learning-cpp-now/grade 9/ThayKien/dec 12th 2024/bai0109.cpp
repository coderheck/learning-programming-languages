#include"stdio.h"
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
ll l,r,a,b;
int main(){
  scanf("%lld%lld%lld%lld",&l,&r,&a,&b);
  ll gc=lcm(a,b);
  printf("%lld",r/gc-(l-1)/gc);
}