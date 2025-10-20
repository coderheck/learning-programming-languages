#include<stdio.h>
using namespace std;
#define ll long long
int n,res;ll s,a[10000005],sum[10000005];
bool goodshit(const int &l){
  if(sum[l-1]>=s){return true;}
  for(int i=l;i<n;i++){
    if(sum[i]-sum[i-l]>=s){return true;}
  }
  return false;
}
void cocksearch(){
  int l=1,r=n,m;
  while(l<=r){
    m=l+(r-l)/2;
    if(goodshit(m)){res=m;r=m-1;}else{l=m+1;}
  }
  printf("%d",res);
}
int main(){
  scanf("%d%lld",&n,&s);
  scanf("%lld",&a[0]);sum[0]=a[0];
  for(int i=1;i<n;i++){scanf("%lld",&a[i]);sum[i]=sum[i-1]+a[i];}
  cocksearch();
}