#include"stdio.h"
using namespace std;
int n,k,a[1000005],maxS=0,curS=0;
int main(){
  scanf("%d%d",&n,&k);
  for(int i=0;i<n;i++){scanf("%d",&a[i]);}
  for(int i=0;i<k;i++){
    maxS+=a[i];curS+=a[i];
  }
  for(int i=k;i<n;i++){
    curS=curS-a[i-k]+a[i];
    if(maxS<curS){maxS=curS;}
  }
  printf("%d",maxS);
}