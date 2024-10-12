#include"stdio.h"
int m,a,k=0;
int main(){
  if(fopen("chiaqua.inp","r")){
    freopen("chiaqua.inp","r",stdin);
    freopen("chiaqua.out","w",stdout);
  }
  scanf("%d",&m);
  for(int i=1;i<=m;i++){
    scanf("%d",&a);
    if(a==100){k++;}
  }
  (k%2==0)?printf("YES"):printf("NO");
}