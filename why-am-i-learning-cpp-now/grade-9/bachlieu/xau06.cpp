#include"stdio.h"
#include"algorithm"
#include"string.h"
char s[100000];int n;
int main(){
  scanf("%s",s);
  n=strlen(s);
  std::sort(s,s+n);
  printf("%d",s[n-1]-'0');
}