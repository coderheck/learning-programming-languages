#include<stdio.h>
long long n;
int main(){
  scanf("%lld",&n);
  printf("%lld",((n&1)?-1:1)*(n+1)/2);
}
