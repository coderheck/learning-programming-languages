#include<stdio.h>
#include<string.h>
#define ll long long
ll res=0;char a[4];
int main(){
  scanf("%s",&a[0]);
  for(ll i=0;i<strlen(a);i++){res+=a[i]-'0';}
  printf("%lld",res);
}
