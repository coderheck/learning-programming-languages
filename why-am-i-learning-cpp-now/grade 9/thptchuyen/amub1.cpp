#include"cstdio"
long long fastPow(long long x, unsigned long long y){
  long long ret=1;
  while(y>0){
    if(y&1){ret*=x;} // b & 1 == !(b % 2)
    y>>=1;x*=x;
  }
  return ret;
}
int main(){
 int x,y,lol;
 scanf("%d%d",&x,&y);
 lol=fastPow(x,y)%10;
 printf("%d",lol);
}