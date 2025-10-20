#include"stdio.h"
int n;
int main(){
  scanf("%d",&n);
  if(n<6){printf("0");return 0;}
  if(n<28){printf("6");return 0;}
  if(n<496){printf("34");return 0;}
  if(n<8128){printf("530");return 0;}
  printf("8658");
}