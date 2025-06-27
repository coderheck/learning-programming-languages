#include"stdio.h"
#define ll long long
int t;ll a,b;
ll fastpowmod(ll a, unsigned ll b, ll c){
  ll res=1; a%=c;
  if(a==0)return 0;
  while(b>0){
    if(b&1){res=(res*a)%c;}
    b>>=1; a=(a*a)%c;
  }
  return res;
}
int main(){
  scanf("%d",&t);
  while(t--){
    scanf("%lld%lld",&a,&b);
    printf("%lld\n",fastpowmod(a,b,10));
  }
}