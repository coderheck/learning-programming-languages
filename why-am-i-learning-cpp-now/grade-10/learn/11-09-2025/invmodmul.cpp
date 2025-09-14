#include <iostream>
using namespace std;
#define ll long long
const ll modN=1000000007;
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
	ll n;cin>>n;
	cout<<fastpow(n,modN-2);
}
