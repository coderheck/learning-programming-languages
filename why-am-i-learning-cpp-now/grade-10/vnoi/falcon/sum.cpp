#include <stdio.h>
#define ll long long 
const ll maxN=4005;
const ll modN=1000000007;
ll n,dp[maxN][maxN],res=0;
int main(){
	scanf("%lld",&n);
	for(ll j=1;j<=n;j++){
		dp[1][j]=1;
		for(ll i=2;i*i<=n*2;i++){
			dp[i][j]=(dp[i-1][j-i]%modN+dp[i][j-i]%modN)%modN;
			if(j==n){res=(res%modN+dp[i][j]%modN)%modN;}
		}
	}
	printf("%lld",res);
}
