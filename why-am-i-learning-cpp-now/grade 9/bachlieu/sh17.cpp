#include"stdio.h"
#define ll long long
ll a,n,mod=1000000007;
ll fastpowmod(ll a, ll b, ll c=mod){
  ll res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1; a=(a*a)%c;
  }
  return res;
}
int main(){
  scanf("%lld%lld",&a,&n);
  printf("%lld",fastpowmod(a,n));
}