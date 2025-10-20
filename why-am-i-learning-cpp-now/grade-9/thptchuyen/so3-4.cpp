#include"stdio.h"
#define ll long long
ll a,b;
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
int main(){scanf("%lld%lld",&a,&b);/*printf("%lld",gcd(a,b));*/printf("%lld",lcm(a,b));}