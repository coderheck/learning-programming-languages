#include"stdio.h"
long long n;
int main(){
  if(fopen("bai01.inp","r")){
    freopen("bai01.inp","r",stdin);
    freopen("bai01.out","w",stdout);
  }
  scanf("%lld",&n);
  printf("%lld",n*(n-1)/2);
}