#include <iostream>
#include <deque>
using namespace std;
#define ll long long 
const ll maxN=1000005;
const ll fuck=-10000000007;
ll max(const ll& _a,const ll& _b){return(_a>_b)?_a:_b;}
ll n,l,r,a[maxN],sum[maxN],res=fuck;
deque<ll>dq;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>l>>r;
	sum[0]=0;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	// sub 1 (91/100)
	// for(ll len=l;len<=r;len++){
	// 	res=max(res,sum[len]);
	// 	for(ll i=len+1;i<=n;i++){res=max(res,sum[i]-sum[i-len]);}
	// }
	
	// sub 2 (100/100)
	for(ll i=l;i<=n;i++){
		while(!dq.empty()&&dq.front()<i-r){dq.pop_front();}
		while(!dq.empty()&&sum[dq.back()]>sum[i-l]){dq.pop_back();}
		dq.push_back(i-l);
		res=max(res,sum[i]-sum[dq.front()]);
	}
	cout<<res;
}
