#include"stdio.h"
#define ll long long
ll n;
int main(){
  scanf("%lld",&n);
  if(n<2){printf("NO");return 0;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){printf("NO");return 0;}
  }
  printf("YES");
}