#include<stdio.h>
#define ll long long
ll n,a[1000005],res=0;
int main(){
  scanf("%lld",&n);
  for(ll i=0;i<n;i++){scanf("%lld",&a[i]);}
  for(ll i=1;i<n-1;i++){
    res+=(a[i-1]>a[i]&&a[i]<a[i+1]);
  }
  printf("%lld",res);
}
