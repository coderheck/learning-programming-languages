#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=40+2;
ll n,x,t[maxN];
vector<ll>a,b;
ll cmp(ll mask,ll cnt){
	ll ret=0;
	while(mask){ret+=(mask&1)*t[cnt];cnt--;mask>>=1;}
	return ret;
}
void init(){
	for(ll mask=0;mask<(1<<n/2);mask++){
		a.push_back(cmp(mask,n/2));
	}
	for(ll mask=0;mask<(1<<(n-n/2));mask++){
		b.push_back(cmp(mask,n-1));
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>x;
	for(ll i=0;i<=n;i++){cin>>t[i];}
	sort(b.begin(),b.end());
	for(ll i=0;i<a.size();i++){
		ll j=lower_bound(b.begin(),b.end())-b;
		if(a[i]+b[i]
	}
}
