#include"stdlib.h"
#include"stdio.h"
#define ll long long
ll n,a[1005];
void swap(ll &a,ll &b){
  ll tmp=a;a=b;b=tmp;
}
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){scanf("%d",&a[i]);}
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if(a[i]>a[j]){swap(a[i],a[j]);}
    }
  }
  for(int i=0;i<n;i++){printf("%d ",a[i]);}
}