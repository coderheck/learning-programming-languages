#include"stdio.h"
using namespace std;
int n;
int main(){
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    if(i%10==5&&i%3==0){printf("%d ",i);}
  }
}