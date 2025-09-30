#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll n,m;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	vector<ll>w(n+5,0);vector<ll>v(m+5,0);
	vector<vector<ll>>dp(n+5,vector<ll>(m+5,0));
	for(ll i=1;i<=n;i++){cin>>w[i]>>v[i];}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			ll p=(w[i-1]<=j)?v[i-1]+dp[i-1][j-w[i-1]]:0;
			dp[i][j]=max(dp[i-1][j],p);
		}
	}
	cout<<dp[n][m];
}
