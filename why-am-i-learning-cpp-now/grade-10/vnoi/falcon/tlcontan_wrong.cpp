#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
const ll maxN=100005;
ll n,a[maxN];
ll lis(){
	vector<ll>ans;
	ans.push_back(a[1]);
	for(ll i=2;i<=n;i++){
		if(a[i]>ans.back()){
			ans.push_back(a[i]);
		}else{
			ll changePos=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
			ans[changePos]=a[i];
		}
	}
	// for(const ll &x:ans){cout<<x<<" ";}
	return ans.size();
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	ll lisLen=lis();
	cout<<n-lisLen;
}
