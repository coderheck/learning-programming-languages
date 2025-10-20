#include"stdio.h"
#define ll long long
int t;ll n;
int main(){
  scanf("%d",&t);
  while(t--){
    scanf("%lld",&n);
    printf("%lld\n",(n/3)+(n/5)-(n/15));
  }
}