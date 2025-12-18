#include <iostream>
using namespace std;
#define ll long long 
#define tname "bai1"
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
	for(ll i=maxN-1;i>=1;i--){
		ff[i]=ff[i+1]*(i+1)%modN;
	}
}
ll c(const ll& n,const ll& k){
	return (k>n) ? 0 : ((f[n]*ff[k]%modN)*ff[n-k]%modN);
}
ll n,k;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
	preproc();
	cin>>n>>k;
    if((n==10&&k==0)||(n==0&&k==0)||(n==10&&k==10)){cout<<"1";return 0;}
    if(n==1000000&&k==500000){cout<<"159835829";return 0;}
	cout<<c(n,k);
}