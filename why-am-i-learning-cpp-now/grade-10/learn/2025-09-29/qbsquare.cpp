#include<stdio.h>
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
ll m,n,res=0;
int main(){
	scanf("%lld%lld",&m,&n);
	ll a[m+5][n+5],dp[m+5][n+5];
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){
			scanf("%lld",&a[i][j]);
			dp[i][j]=1;
		}
	}
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){
				if(a[i][j]==a[i][j-1]&&a[i][j]==a[i-1][j]&&a[i][j]==a[i-1][j-1]){
					dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
				}else{
					dp[i][j]=1;
				}
				res=max(res,dp[i][j]);
			}
	}
	printf("%lld",res);
}
