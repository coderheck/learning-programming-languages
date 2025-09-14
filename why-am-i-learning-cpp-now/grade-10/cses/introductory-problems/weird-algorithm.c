#include<stdio.h>
int main(){long long n;scanf("%lld",&n);while(n!=1){printf("%lld ",n);if(n&1){n*=3,n++;}else{n>>=1;}}printf("1");}

