#include <iostream>
using namespace std;
#define ll long long 
const ll modN=1000000007;
const ll maxN=1000005;
ll f[maxN+5],ff[maxN+5];
ll fastpow(ll a,ll b){
	if(!(a%modN)){return 0;}
	ll res=1;a%=modN;
	while(b){
		if(b&1){res=(res*a)%modN;}
		a=(a*a)%modN;b>>=1;
	}
	return res;
}
void preproc(){
	f[0]=1;
	for(ll i=1;i<=maxN;i++){
		f[i]=f[i-1]*i%modN;
	}
	ff[maxN]=fastpow(f[maxN],modN-2);
	for(ll i=maxN-1;i>=0;i--){
		ff[i]=ff[i+1]*(i+1)%modN;
	}
}
ll c(const ll& n,const ll& k){
	return (k>n||k<0) ? 0 : ((f[n]*ff[k]%modN)*ff[n-k])%modN;
}
ll n,res=0,k;
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	preproc();
	cin>>n;k=n>>1;
	cout<<((n&1)?0:fastpow(k+1,modN-2)*c(2*k,k)%modN);
}
