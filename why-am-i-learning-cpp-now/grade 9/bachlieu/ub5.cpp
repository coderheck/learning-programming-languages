#include"stdio.h"
int n,x,a,t=0;
int main(){
  scanf("%d%d",&n,&x);
  while(n--){scanf("%d",&a);t+=(x%a==0)?a:0;}
  printf("%d",t);
}