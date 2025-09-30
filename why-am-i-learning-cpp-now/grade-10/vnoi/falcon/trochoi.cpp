#include <iostream>
#include <algorithm>
// #include <functional>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=1000005;
ll n,a[maxN],b[maxN],res=10000000007;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){cin>>b[i];}
	sort(a,a+n);sort(b,b+n);
	for(ll i=0;i<n;i++){
		ll it=lower_bound(b,b+n,-a[i])-b;
		if(it<n){res=min(res,abs(a[i]+b[it]));}
		if(it>0){res=min(res,abs(a[i]+b[it-1]));}
		if(!res){break;}
	}
	cout<<res;
}
