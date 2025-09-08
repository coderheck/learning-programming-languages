#include<stdio.h>
#include<string.h>
#define ll long long 
char s[105],u=0,l=0,n;
int main(){
  scanf("%s",&s[0]);
  n=strlen(s);
  for(ll i=0;i<n;i++){
    (s[i]>='a'&&s[i]<='z')?l++:u++;
  }
  if(u>l){
    for(ll i=0;i<n;i++){
      s[i]-=(s[i]>='a'&&s[i]<='z')?'a'-'A':0;
    }
  }else{
    for(ll i=0;i<n;i++){
      s[i]+=(s[i]>='A'&&s[i]<='Z')?'a'-'A':0;
    }
  }
  printf("%s",s);
}
