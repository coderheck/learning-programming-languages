#include"stdio.h"
#define ll long long
ll t;int n,k,res=0;
int main(){
  scanf("%d%d",&n,&k);
  for(int i=1;i<=n;i++){
    scanf("%lld",&t);
    res+=!(t%k);
  }
  printf("%d",res);
}