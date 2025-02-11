#include"stdio.h"
using namespace std;
int n;long long res=0;char s[100005];int pos[256];
int main(){
  scanf("%d%s",&n,&s[0]);
  for(int i=0;i<n;i++){
    res+=pos[s[i]];pos[s[i]]++;
  }
  printf("%lld",res);
}