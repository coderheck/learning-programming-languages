#include"stdio.h"
#define ll long long
#define mmod 1000000007
int t,n,c=2;ll f[1000005];
void preproc(){
  ll tmp=1;
  f[0]=f[1]=1;
  while(c<1000000){
    f[c]=((f[c-1])%mmod+(f[c-2])%mmod)%mmod;
    c++;
  }
}
int main(){
  preproc();
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    printf("%d\n",f[n-1]);
  }
}