#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define tname "captoc"
ll n,x;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>x;
	vector<vector<ll>>a(n+5,vector<ll>(x+5,0)),dp(n+5,vector<ll>(x+5,0));
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=x;j++){cin>>a[i][j];}
	}
	for(ll i=1;i<=n;i++){
		for(ll d=0;d<=x;d++){
			for(ll k=0;k<=d;k++){
				dp[i][d]=max(dp[i][d],dp[i-1][d-k]+a[i][k]);
			}
		}
	}
	cout<<dp[n][x];
}
