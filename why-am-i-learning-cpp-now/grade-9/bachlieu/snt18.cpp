#include"stdio.h"
#define ll long long
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
bool ispr(ll n){
  if(n%2==0){return false;}
  for(ll i=3;i*i<=n;i+=2){
    if(n%i==0){return false;}
  }
  return true;
}
ll n;
int main(){
  prSieve();
  scanf("%lld",&n);
  while(n!=0){
    if(n>maxP){
      if(!ispr(n)){printf("NO");return 0;}
    }else{
      if(pr[n]){printf("NO");return 0;}
    }
    n/=10;
  }
  printf("YES");
}