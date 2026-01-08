#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long 
#define tname "caythong"
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
ll n,a[maxN],b[maxN],res=10000000000007;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){cin>>b[i];}
	sort(a+1,a+n+1);sort(b+1,b+n+1);
	for(ll i=1;i<=n;i++){
		ll pos=lower_bound(b+1,b+n+1,-a[i])-b;
		if(pos<=n){
			res=min(res,abs(a[i]+b[pos]));
		}
		if(pos>1){
			res=min(res,abs(a[i]+b[pos-1]));
		}
	}
	cout<<res;
}
