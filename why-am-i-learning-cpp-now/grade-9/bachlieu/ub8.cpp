#include"stdio.h"
int gcd(int a,int b){return(b==0)?a:gcd(b,a%b);}
int lcm(int a,int b){return(a/gcd(a,b))*b;}
int n,a,b,c,kys,l=0;
int main(){
  scanf("%lld%lld%lld%lld",&n,&a,&b,&c);
  kys=lcm(a,lcm(b,c));
  for(int i=1;i<=n;i++){
    if(i%kys==0){printf("%d ",i);l++;}
  }
  if(!l){printf("-1");}
}