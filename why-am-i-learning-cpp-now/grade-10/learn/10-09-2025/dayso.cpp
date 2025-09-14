#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=1000005;
ll n,pc=0,a[maxN],divs[maxN],perfect[maxN];bool ass=true;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	for(ll i=1;i<=maxN;i++){
		for(ll j=i;j<=maxN;j+=i){divs[j]+=i;}
	}
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){
		if(a[i]!=a[n-i-1]){ass=false;}
		if(divs[a[i]]-a[i]==a[i]){perfect[pc++]=a[i];}
	}
	if(ass){cout<<"Yes\n";}else{cout<<"No\n";}
	for(ll i=0;i<pc;i++){cout<<perfect[i]<<" ";}
	if(!pc){cout<<"0";}
	cout<<"\n";
	sort(a,a+n);
	for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
}
