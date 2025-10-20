#include"stdio.h"
#include"algorithm"
#define ll long long
ll a[5],maxn=0;
int main(){
  for(int i=0;i<5;i++){scanf("%lld",&a[i]);if(a[i]>maxn){maxn=a[i];}}
  std::sort(a,a+5);
  for(int i=3;i>=0;i--){
    if(a[i]!=maxn){printf("%lld",a[i]);return 0;}
  }
  printf("%lld",maxn);
}