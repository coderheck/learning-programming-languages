#include <stdio.h>
int main(){long long n;scanf("%lld",&n);printf("%lld",n&1?(n+1)*-1/2:n/2);}
