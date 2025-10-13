#include <stdio.h>
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
ll a,b;
ll f(ll p){
	ll i=p,c=0;
	while(i<=b){
		if((a+i-1)/i*i<=b){c++;}else{break;}
		i*=p;
	}
	return c;
}
int main(){
	scanf("%lld%lld",&a,&b);
	printf("%lld",min(f(2),f(5)));
}
