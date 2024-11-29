#include"stdio.h"
#define ll long long
ll fastpowmod(ll a, unsigned ll b, ll c){
  ll res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1; a=(a*a)%c;
  }
  return res;
}
ll a,n;
int main(){
  scanf("%lld%lld",&a,&n);
  printf("%d",fastpowmod(a,n,10));
}