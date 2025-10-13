#include <stdio.h>
#define ll long long
const ll maxP=2000000;
bool pr[maxP+5];
ll pn[maxP+5],a,n;
void prSieve(){
	pr[0]=pr[1]=true,pr[2]=false,pn[2]=2;
	for(ll i=3;i*i<=maxP;i+=2){
		for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
	}
	for(ll i=3;i<=maxP;i++){pn[i]=(i&1)&&(!pr[i])?i:pn[i-1];}
}
int main(){
	prSieve();
	scanf("%lld",&n);
	while(n--){scanf("%lld",&a);printf("%lld ",pn[a]);}
}
