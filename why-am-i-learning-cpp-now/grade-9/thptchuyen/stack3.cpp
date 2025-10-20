#include"stdio.h"
#include"cstring"
#include"stack"
using namespace std;
bool ispair(const char &o,const char &c){
  return(o=='('&&c==')')||(o=='['&&c==']')||(o=='{'&&c=='}');
}
char s[1000005];int n;stack<char>ss;
int main(){
  scanf("%s",s);
  n=strlen(s);
  for(int i=0;i<n;i++){
    if(s[i]=='('||s[i]=='{'||s[i]=='['){
      ss.push(s[i]);
    }else{
      if(ss.empty()||!ispair(ss.top(),s[i])){printf("NO");return 0;}
      ss.pop();
    }
  }
  if(ss.empty()){printf("YES");}else{printf("NO");}
}