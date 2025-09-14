#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=20000000;
bool pr[maxN+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxN;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxN;j+=i){pr[j]=true;}
		}
	}
}
ll divs[1000005];
void divSieve(){
	for(ll i=1;i<=1000000;i++){
		for(ll j=i;j<=1000000;j+=i){divs[i]++;}
	}
}
void primeFactorization(ll n){
	while(!(n&1)){n>>=1;cout<<2<<" ";}
	for(ll i=3;i*i<=n;i+=2){
		while(n%i==0){n/=i;cout<<i<<" ";}
	}
	if(n>1){cout<<n;}
}
int main(){
	// prSieve();
	// divSieve();
	ll n;cin>>n;
	primeFactorization(n);
}
