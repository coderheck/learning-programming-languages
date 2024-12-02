#include"stdio.h"
#include"stdlib.h"
int main(){
  int n;
  while(1){
    scanf("%d",&n);
    printf("%d\n",n);
    fflush(stdout);
    if(n==42){exit(0);}
  }
}