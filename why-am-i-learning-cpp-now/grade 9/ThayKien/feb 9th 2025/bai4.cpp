#include"stdio.h"
#include"string.h"
using namespace std;
char s[1000005];int n;
int main(){
  scanf("%s",&s[0]);n=strlen(s);
  for(int i=n-1;i>=0;i-=2){printf("%c",s[i]);}
  for(int i=(n&1);i<n;i+=2){printf("%c",s[i]);}
}