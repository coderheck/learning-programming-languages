#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define tname "sequence"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=10005,inff=1LL<<62;
ll n,a[maxN],b[maxN],res=inff;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	vector<vector<ll>>dp(n+5,vector<ll>(n+5,inff));
	for(ll i=1;i<=n;i++){cin>>a[i];b[i]=a[i];}
	sort(b+1,b+n+1);
	for(ll j=1;j<=n;j++){
		dp[1][j]=abs(a[1]-b[j]);
	}
	for(ll i=2;i<=n;i++){
		ll ans=inff;
		for(ll j=1;j<=n;j++){
			ans=min(ans,dp[i-1][j]);
			dp[i][j]=abs(a[i]-b[j])+ans;
		}
	}
	for(ll j=1;j<=n;j++){res=min(res,dp[n][j]);}
	lout(res);
	// if(n<=20){
	// 	const ll maxMask=1LL<<n;
	// 	vector<ll>pos(22),b(a+1,a+n+1);
	// 	for(const ll &x:b){cerr<<x<<" ";}
	// 	for(ll mm=1;mm<=maxMask;mm++){
	// 		// bitmask với bit thứ i là trạng thái chọn số thứ i
	// 		// for(ll i=1;i<=n;i++){
	// 		// 	if(getbit(mm,i-1)){pos.push_back(i);}
	// 		// }
	//
	// 	}
	// 	return 0;
	// }
}
