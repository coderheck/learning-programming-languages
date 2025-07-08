#include<stdio.h>
#include<string.h>
#define ll unsigned long long 
char s[1000005];ll t=0,n;
int main(){
	scanf("%s",&s[0]);
	n=strlen(s);
	for(ll i=0;i<n;i++){t+=s[i]-'0';}
	printf("%s",(t%9)?"No":"Yes");
}
