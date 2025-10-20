#include<stdio.h>
#define ll long long
ll t,n,r,res[10]={14,5,10,1,2,4,8,16,7,14};
int main(){
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    if(n==1){printf("50\n");continue;}
    r=(n-1)%9;
    printf("%lld\n",res[r]);
  }
}
