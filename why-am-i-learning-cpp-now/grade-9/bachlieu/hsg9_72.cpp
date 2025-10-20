#include<stdio.h>
#define ll long long
ll n,x,k,a,res=0;
int main(){
  scanf("%lld%lld%lld",&n,&x,&k);
  while(n--){
    scanf("%lld",&a);
    res+=((a-x>=0)?(a-x<=k):(-1*(a-x)<=k));
  }
  printf("%lld",res);
}
