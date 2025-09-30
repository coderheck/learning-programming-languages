#include <iostream>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=100000;
ll n,res=0,a[5][maxN+5],dp[5][maxN+5];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=3;i++){
		for(ll j=1;j<=n;j++){cin>>a[i][j];}
	}
	dp[1][1]=a[1][1],dp[2][1]=a[2][1],dp[3][1]=a[3][1];
	for(ll i=2;i<=n;i++){
		dp[1][i]=a[1][i]+max(dp[1][i-1],dp[2][i-1]);
		dp[2][i]=a[2][i]+max(dp[1][i-1],max(dp[2][i-1],dp[3][i-1]));
		dp[3][i]=a[3][i]+max(dp[2][i-1],dp[3][i-1]);
	}
	cout<<max(dp[1][n],max(dp[2][n],dp[3][n]));
}
