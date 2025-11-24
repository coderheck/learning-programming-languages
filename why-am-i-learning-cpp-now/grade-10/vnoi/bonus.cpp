#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define max(A,B) ((A)>(B)?(A):(B))
const ll maxN=1005;
ll n,k,res=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	vector<vector<ll>>a(n+5,vector<ll>(n+5)),dp(n+5,vector<ll>(n+5,0));
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			cin>>a[i][j];
			dp[i][j]=a[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	for(ll i=k;i<=n;i++){
		for(ll j=k;j<=n;j++){
			res=max(res,dp[i][j]-dp[i-k][j]-dp[i][j-k]+dp[i-k][j-k]);
		}
	}
	cout<<res;
}
