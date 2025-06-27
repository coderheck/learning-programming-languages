#include<stdio.h>
#define ll long long
ll n,c=0;
int main(){
  scanf("%lld",&n);
  while(n!=0){n/=5;c+=n;}
  printf("%lld",c);
}
