#include"stdio.h"
long long a=-1,b=-1,t;
int main(){
  if(a==-1&&b==-1){
    scanf("%lld%lld",&a,&b);main();
  }else{
    if(b==0){printf("%lld",a);}else{t=b;b=a%b;a=t;main();}
  }
}