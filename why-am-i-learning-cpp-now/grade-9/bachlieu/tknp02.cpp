#include<stdio.h>
#include<algorithm>
#define ll long long
int n,t;ll a[100005],x;
void bitchsearch(){
  ll l=0,r=n-1,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(a[m]==x){
      printf("Y\n");return;
    }else if(a[m]<x){l=m+1;}else{r=m-1;}
  }
  printf("N\n");
}
int main(){
  scanf("%lld",&n);
  for(int i=0;i<n;i++){scanf("%lld",&a[i]);}
  std::sort(a,a+n);
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&x);
    bitchsearch();
  }
}