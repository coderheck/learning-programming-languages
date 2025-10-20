#include"stdio.h"
using namespace std;
int a,b;
int gcd(int a,int b){return(b==0)?a:gcd(b,a%b);}
int main(){
  scanf("%d%d",&a,&b);
  printf("%d",gcd(a,b));
}