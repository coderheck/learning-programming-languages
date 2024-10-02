#include"stdio.h"
int main(){
  if(fopen("cau1a.inp","r")){
    freopen("cau1a.inp","r",stdin);
    freopen("cau1a.out","w",stdout);
  }
  long long n;
  scanf("%lld",&n);
  printf("%lld",n*(n+1)/2);
}