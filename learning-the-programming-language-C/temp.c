#include"stdio.h"
#include"stdbool.h"
bool isEven(int n){
  return( n == n >> 1 << 1 );
}
int main(){
  bool result = isEven(8);
  printf("%d",result);
}
