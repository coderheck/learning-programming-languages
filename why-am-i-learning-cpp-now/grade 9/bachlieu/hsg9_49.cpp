#include<stdio.h>
#define ll long long
ll n,x,q,l,r,a[100005],cnt[100005];
int main(){
  cnt[0]=0;
  scanf("%lld%lld%lld",&n,&x,&q);
  for(ll i=1;i<=n;i++){
    scanf("%lld",&a[i]);
    cnt[i]=cnt[i-1]+(a[i]>0&&a[i]<x);
  }
  while(q--){
    scanf("%lld%lld",&l,&r);
    printf("%lld\n",cnt[r]-cnt[l-1]);
  }
}
