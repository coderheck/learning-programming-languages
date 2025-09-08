#include <iostream>
using namespace std;
#define ll long long 
const ll mod=1000000007;
ll fastpowmod(ll a,ll b){
	if(!(a%mod)){return 0;}
	ll res=1;
	while(b){
		if(b&1){res=(res*a)%mod;}
		b>>=1;a=(a*a)%mod;
	}
	return res;
}
ll a,n;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>n;
	cout<<fastpowmod(a,n);
}
