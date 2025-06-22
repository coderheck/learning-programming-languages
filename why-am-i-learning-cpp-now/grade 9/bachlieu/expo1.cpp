#include<stdio.h>
#define ll long long
const ll mod=1000000007;
const ll phiMod=1000000006;
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll fastpowmod(ll a,ll b,const ll &m){
  if(a%m==0){return 0;}
  ll res=1;
  while(b){
    if(b&1){res=(res*a)%m;}
    a=(a*a)%m;b>>=1;
  }
  return res;
}
ll a,b,c;
int main(){
  scanf("%lld%lld%lld",&a,&b,&c);
  printf("%lld",!(a%mod)?0:fastpowmod(a,fastpowmod(b,c,phiMod),mod));
}
