#include<stdio.h>
#define maxP 200000
#define ll long long
bool pr[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
ll a,b;
int main(){
	prSieve();
	scanf("%lld%lld",&a,&b);
	for(ll i=a;i<=b;i++){if(!pr[i]){printf("%lld ",i);}}
}
