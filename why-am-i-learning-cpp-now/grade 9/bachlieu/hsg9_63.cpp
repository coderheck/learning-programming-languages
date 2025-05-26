#include<stdio.h>
#define ll long long
struct ar{ll n,z=0,o=0,t=0;}a[105];
ll t,n,tmp=0;
int main(){
  scanf("%lld",&t);
  for(ll i=0;i<t;i++){
    scanf("%lld",&a[i].n);
    while(a[i].n--){
      scanf("%lld",&tmp);
      if(!tmp){a[i].z++;}else if(tmp==1){a[i].o++;}else{a[i].t++;}
    }
  }
  for(ll i=0;i<t;i++){
    while(a[i].z--){printf("0 ");}
    while(a[i].o--){printf("1 ");}
    while(a[i].t--){printf("2 ");}
    printf("\n");
  }
}
