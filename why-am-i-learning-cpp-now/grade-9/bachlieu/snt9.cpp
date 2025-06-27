#include"stdio.h"
#define ll long long
int t;ll n;
void compute(){
  if(n<2){printf("NO\n");return;}
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){printf("NO\n");return;}
  }
  printf("YES\n");
}
int main(){
  scanf("%d",&t);
  while(t--){
    scanf("%lld",&n);
    compute();
  }
}