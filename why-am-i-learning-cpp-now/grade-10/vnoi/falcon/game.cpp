#include <iostream>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=1000000;
ll n,a[maxN+5],dp[maxN+5];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	dp[1]=a[1],dp[2]=a[1]+a[2];
	for(ll i=3;i<=n;i++){
		dp[i]=max(dp[i-1],max(a[i]+dp[i-2],a[i]+a[i-1]+dp[i-3]));
	}
	cout<<dp[n];
}
