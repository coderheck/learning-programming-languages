#include"stdio.h"
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
ll a,b,n;
int main(){
  if(fopen("cau1.inp","r")){freopen("cau1.inp","r",stdin);freopen("cau1.out","w",stdout);}
  scanf("%lld%lld%lld",&n,&a,&b);
  printf("%lld",n/a+n/b-n/lcm(a,b));
}