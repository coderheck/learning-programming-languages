#include<stdio.h>
#define ll long long
#define maxP 10
bool pr[maxP+5];ll n,a,res=0;
void check(){
  ll d=0;
  while(a!=0){
    d=a%10;
    if(d!=2&&d!=3&&d!=5&&d!=7){return;}
    a/=10;
  }
  res++;
}
int main(){
  scanf("%lld",&n);
  while(n--){
    scanf("%lld",&a);check();
  }
  printf("%lld",res);
}
