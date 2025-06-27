#include"stdio.h"
#define ll long long
int main(){
  char s[1000];ll t=0;
  scanf("%s",&s);
  for(ll i=0;i<1000;i++){
    if(s[i]=='H'){
      ll c=0;
      while(s[i+1]>='0'&&s[i+1]<='9'){c*=10;c+=s[i+1]-'0';i++;}
      t+=c;
    }
    if(s[i]=='N'){
      ll c=0;
      while(s[i+1]>='0'&&s[i+1]<='9'){c*=10;c+=s[i+1]-'0';i++;}
      t+=c*14;
    }
    if(s[i]=='O'){
      ll c=0;
      while(s[i+1]>='0'&&s[i+1]<='9'){c*=10;c+=s[i+1]-'0';i++;}
      t+=c*16;
    }
    if(s[i]=='C'){
      ll c=0;
      while(s[i+1]>='0'&&s[i+1]<='9'){c*=10;c+=s[i+1]-'0';i++;}
      t+=c*12;
    }
  }
  printf("%lld",t);
}
