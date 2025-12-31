#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=200005;
ll n,d,a[maxN],res=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>d;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	sort(a+1,a+1+n);
	ll r=1;
	for(ll l=1;l<=n;l++){
		while(r<=n&&a[r]-a[l]<=d){r++;}
		ll len=r-l;
		if(len>=3){res+=(len-1)*(len-2)/2;}
	}
	cout<<res;
}
