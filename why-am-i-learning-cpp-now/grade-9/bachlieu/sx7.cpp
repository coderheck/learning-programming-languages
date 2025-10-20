#include"stdlib.h"
#include"stdio.h"
#define ll long long
ll n,a[1000005];
int cmpfn(const void *a,const void *b){
  return(*(int*)a - *(int*)b);
}
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){scanf("%d",&a[i]);}
  qsort(a,n,sizeof(a[0]),cmpfn);
  for(int i=0;i<n;i++){printf("%d ",a[i]);}
}