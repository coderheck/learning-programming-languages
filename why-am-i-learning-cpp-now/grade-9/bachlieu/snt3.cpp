#include"stdio.h"
#define ll long long
#define maxN 1000000
#define maxArrSize 10000000
int n,res=0;
ll a[maxN];
bool pr[maxArrSize+2];
void prSieve(){
  for(int i=2;i<=maxArrSize;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=2;i*i<=maxArrSize;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxArrSize;j+=i){pr[j]=false;}
    }
  }
}
bool ispr(ll n){
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){return false;}
  }
  return true;
}
int main(){
  prSieve();
  scanf("%d",&n);
  for(int i=0;i<n;i++){scanf("%lld",&a[i]);}
  for(int i=0;i<n;i++){
    if(a[i]<=maxArrSize){
      res+=pr[a[i]];
    }else{res+=ispr(a[i]);}
  }
  printf("%d",res);
}