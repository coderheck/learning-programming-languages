#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=2000005;
ll l,r,s=0/*,divs[maxN]*/;
ll cook(const ll& n){
	if(!n){return 0;}
	ll res=0,d=1;
	while(d<=n){
		ll q=n/d,dmax=n/q;
		res+=q*(dmax-d+1);
		d=dmax+1;
	}
	return res;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	// ----==== sub 1 ====----
	// for(ll i=1;i<=maxN;i++){
	// 	for(ll j=i;j<=maxN;j+=i){divs[j]++;}
	// }
	// for(ll i=l;i<=r;i++){
	// 	s+=divs[i];
	// }
	// for(ll i=1;i*i<=r;i++){
	// 	for(ll j=((l+i-1)/l)*l;j<=r;j+=i){s+=();}
	// }
	// cout<<s;
	// ----==== sub 1 ====----
	cin>>l>>r;
	cout<<cook(r)-cook(l-1);
}

