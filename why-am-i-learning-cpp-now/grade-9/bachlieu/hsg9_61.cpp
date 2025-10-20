#include<stdio.h>
#define ll long long
#define maxP 3000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=true;
  for(ll i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
    }
  }
}
bool tcs(ll n){
  ll r=0;
  while(n){r+=n%10;n/=10;}
  return!(r%5);
}
ll t,l,r,cnt[maxP+5];
int main(){
  prSieve();
  cnt[0]=cnt[1]=0;
  for(ll i=1;i<=maxP;i++){
    cnt[i]=cnt[i-1]+(!pr[i]&&tcs(i));
  }
  scanf("%lld",&t);
  while(t--){
    scanf("%lld%lld",&l,&r);
    printf("%lld\n",cnt[r]-cnt[l-1]);
  }
}
