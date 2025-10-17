#include <iostream>
using namespace std;
#define ll long long 
ll sumdivs(const ll& n){
	ll ret=0;
	for(ll i=1;i*i<=n;i++){
		if(n%i==0){ret+=i;ll j=n/i;ret+=(i!=j)?j:0;}
	}
	return ret;
}
ll n,s1;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	cout<<n/2*n-sumdivs(n);
}
