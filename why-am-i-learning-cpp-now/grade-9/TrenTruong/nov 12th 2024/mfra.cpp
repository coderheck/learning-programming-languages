#include"stdio.h"
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll a,b,gd;
int main(){
  if(fopen("mfra.inp","r")){
    freopen("mfra.inp","r",stdin);
    freopen("mfra.out","w",stdout);
  }
  scanf("%lld%lld",&a,&b);
  gd=gcd(a,b);
  a/=gd;b/=gd;
  (b<0)?printf("%lld %lld",0-a,0-b):printf("%lld %lld",a,b);
}