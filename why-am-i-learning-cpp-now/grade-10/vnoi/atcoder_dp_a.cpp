#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
ll n;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	vector<ll>a(n+5,0);
	vector<ll>dp(n+5,0);
	for(ll i=1;i<=n;i++){cin>>a[i];}
	dp[1]=0;dp[2]=abs(a[1]-a[2]);
	for(ll i=3;i<=n;i++){
		dp[i]=min(dp[i-1]+abs(a[i]-a[i-1]),dp[i-2]+abs(a[i]-a[i-2]));
	}
	cout<<dp[n];
}
