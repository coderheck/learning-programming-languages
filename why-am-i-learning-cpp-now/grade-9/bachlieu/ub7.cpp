#include"stdio.h"
int gcd(int a,int b){return(b==0)?a:gcd(b,a%b);}
int lcm(int a,int b){return(a/gcd(a,b))*b;}
int n,a,b,c;
int main(){
  scanf("%d%d%d%d",&n,&a,&b,&c);
  int divabc=n/lcm(a,lcm(b,c));
  printf("%d",(n/lcm(a,b)-divabc)+(n/lcm(a,c)-divabc)+(n/lcm(b,c)-divabc));
}