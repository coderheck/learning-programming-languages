#include"stdio.h"
#include"algorithm"
using namespace std;
#define ll long long
ll n,t,x,a[1000005];
void bsearch(int l,int r){
  int m;
  while(l<=r){
    m=l+(r-l)/2;
    if(a[m]==x){printf("Y\n");return;}
    if(a[m]<x){l=m+1;}else{r=m-1;}
  }
  printf("N\n");
}
int main(){
  // freopen("chat2.inp","r",stdin);
  scanf("%lld",&n);
  for(int i=0;i<n;i++){scanf("%lld",&a[i]);}
  sort(a,a+n);
  scanf("%lld",&t);
  for(int i=1;i<=t;i++){
    scanf("%lld",&x);
    bsearch(0,n-1);
  }
}