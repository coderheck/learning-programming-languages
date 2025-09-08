#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll modN=1000000007;
const ll maxN=1000005;
string s;umap<char,ll>cnt;ll res=0;
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
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	preproc();
	cin>>s;
	for(char &c:s){cnt[c]++;}
	res=f[s.size()];
	for(auto it:cnt){
		res=(res*ff[it.second])%modN;
	}
	cout<<res;
}
