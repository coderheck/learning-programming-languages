#include <stdio.h>
#include <string.h>
char s[20];int res=0,n,i=0;
int main(){
	scanf("%s",&s[0]);
	n=strlen(s);
	while(i<n){res+=s[i++]-'0';}
	printf("%d",res);
}
