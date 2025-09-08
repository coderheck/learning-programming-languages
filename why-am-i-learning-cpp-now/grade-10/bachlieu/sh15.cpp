#include <stdio.h>
#include <string.h>
int res=0,n,i=0;
char s[105];
int main(){
	scanf("%s",&s[0]);
	n=strlen(s);
	while(i<n){res+=s[i++]-'0';}
	printf("%d",res);
}
