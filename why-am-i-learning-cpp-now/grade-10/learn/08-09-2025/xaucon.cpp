#include <iostream>
#include <string>
using namespace std;
#define ll long long 
const ll maxN=1000005;
ll n,k,res=0,p[maxN];string s;
ll bitchsearch(const ll& lp){
	ll l=lp,r=n,m,ret=n+1;
	while(l<=r){
		m=l+r>>1;
		if(p[m]-p[lp-1]>=k){ret=m;r=m-1;}else{l=m+1;}
	}
	return ret;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k>>s;
	p[0]=0;
	for(ll i=1;i<=n;i++){p[i]=p[i-1]+s[i-1];}
	for(ll l=1;l<=n;l++){
		ll r=bitchsearch(l);
		res+=r<=n?n-r+1:0;
	}
	cout<<res;
}
