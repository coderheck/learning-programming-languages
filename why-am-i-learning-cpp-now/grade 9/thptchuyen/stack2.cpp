#include"stdio.h"
#include"cstring"
#include"stack"
using namespace std;
char s[1000005];int n;stack<char>ss;
int main(){
  scanf("%s",s);
  n=strlen(s);
  for(int i=0;i<n;i++){
    if(s[i]=='('){
      ss.push(s[i]);
    }else{
      if(ss.empty()){printf("NO");return 0;}
      ss.pop();
    }
  }
  if(ss.empty()){printf("YES");}else{printf("NO");}
}