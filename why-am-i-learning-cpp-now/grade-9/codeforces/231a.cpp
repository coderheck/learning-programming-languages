#include"stdio.h"
int n,a,b,c,res=0;
int main(){
  scanf("%d",&n);
  while(n--){
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c>=2){res++;}
  }
  printf("%d",res);
}