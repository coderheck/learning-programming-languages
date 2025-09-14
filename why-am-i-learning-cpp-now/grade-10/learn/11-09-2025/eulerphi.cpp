#include <iostream>
using namespace std;
#define ll long long 
const ll modN=1000000007;
ll a,p;
ll fastpow(ll a,ll b){
	a%=modN;if(!a){return 0;}
	ll res=1;
	while(b){
		if(b&1){res=(res*a)%modN;}
		a=(a*a)%modN,b>>=1;
	}
	return res;
}
int main(){
	// number of numbers a that gcd(a,p)==1
	// a^-1 = a^(eulerphi(p)-1) (mod p)
}
