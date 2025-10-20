#include"stdio.h"
int a,b;
int gcd(int a,int b){return(b==0)?a:gcd(b,a%b);};
int lcm(int a,int b){return(a/gcd(a,b))*b;}
int main(){scanf("%d%d",&a,&b);printf("%d",b/3-a/3);}