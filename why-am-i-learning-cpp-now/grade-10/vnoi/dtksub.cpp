#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=50000;
const ll modN=1000000007;
const ll P=31;
ll n,k,res=0,hsh[maxN+5],p[maxN+5];string s;
ll geth(const ll& l,const ll& r){
	return(hsh[r]-hsh[l-1]*p[r-l+1]%modN+modN)%modN;
}
bool sol(const ll& len){
	umap<ll,ll>cnt;
	for(ll i=1;i+len-1<=n;i++){
		if(++cnt[geth(i,i+len-1)]>=k){return true;}
	}
	return false;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n>>k>>s;
	p[0]=1,hsh[0]=0;
	for(ll i=1;i<=maxN;i++){p[i]=(p[i-1]*P)%modN;}
	for(ll i=1;i<=n;i++){hsh[i]=(hsh[i-1]*P+s[i-1]-'a'+1)%modN;}
	ll l=1,r=n,m;
	while(l<=r){
		m=l+r>>1;
		if(sol(m)){res=m;l=m+1;}else{r=m-1;}
	}
	cout<<res;
}
