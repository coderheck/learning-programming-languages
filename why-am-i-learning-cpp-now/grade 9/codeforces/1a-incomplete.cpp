#include"stdio.h"
#define ll long long
unsigned ll n,m,a,area,each;
int main(){
  scanf("%lld%lld%lld",&n,&m,&a);
  area=n*m;each=a*a;
  if(area%each==0){
    printf("%lld",area/each);
  }else{
    printf("%lld",area/each+1);
  }
}