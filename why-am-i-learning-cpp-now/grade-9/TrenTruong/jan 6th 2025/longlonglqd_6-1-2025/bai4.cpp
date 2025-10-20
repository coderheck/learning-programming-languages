#include <stdio.h>
int max(int a,int b){return(a>b)?a:b;}
int a[100005],n;long long k;
void atMostSum() {
  int st=0,end=0,res=-1;long long sum=0;
  for(int i=0;i<n;i++){
    sum+=i;end++;
    while(sum>k){
      sum-=a[st];
      st++;
    }
    res=max(res,end-st-1);
  }
  printf("%d",res);
}
int main() {
  scanf("%d%lld",&n,&k);
  for(int i=0;i<n;i++){scanf("%d",&a[i]);}
  atMostSum();
}