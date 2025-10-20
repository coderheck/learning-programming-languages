#include<stdio.h>
#include<string.h>
int max(const int& a,const int& b){return(a>b)?a:b;}
char s[1000005];int res=0,n;
int main(){
	scanf("%s",&s[0]);
	n=strlen(s);
	for(int i=0;i<n;i++){res=max(res,s[i]);}
	printf("%c",res);
}
