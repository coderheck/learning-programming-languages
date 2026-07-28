// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "thhv25_dx02_10_a"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=500005,inff=1LL<<62,modN=1000000007;
ll n,a[maxN],fact[maxN],invf[maxN];
bool sub2=true;
ll fastpowmod(ll a,ll b){
	if(a%modN==0){return 0;}
	ll res=1;
	while(b){
		if(b&1){res=(res*a)%modN;}
		b>>=1;a=(a*a)%modN;
	}
	return res;
}
ll modInv(const ll &n){return fastpowmod(n,modN-2);}
ll nCr(ll n,ll r){
	if(r<0||r>n){return 0;}
	return fact[n] * invf[r]%modN * invf[n-r]%modN;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		if(sub2 && i>1){sub2&=a[i-1]==a[i];}
	}
	if(sub2){
		a[1]=((a[1]%modN)*fastpowmod(2,n-1))%modN;
		lout(a[1]);
	}else if(n<=1000){
		while(n>1){
			for(ll i=1;i<=n-1;i++){
				a[i]=(a[i]%modN+a[i+1]%modN)%modN;
			}
			n--;
		}
		lout(a[1]);
	}else{
		fact[0]=invf[0]=1;
		for(ll i=1;i<=n;i++){fact[i]=(fact[i-1]*i)%modN;}
		invf[n]=modInv(fact[n]);
		for(ll i=n-1;i>=1;i--){invf[i]=(invf[i+1]*(i+1))%modN;}
		ll res=0;
		for(ll i=1,aa;i<=n;i++){
			aa=((a[i]%modN)*nCr(n-1,i-1)%modN)%modN;
			res=(res+aa)%modN;
		}
		lout(res);
	}
}
