#include <stdio.h>
#include <vector>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
const ll inf=1000000000007;
ll n,W;vector<ll>wt(maxN),vl(maxN);
int main(){
	vector<ll>dp(maxN+5,inf);
	scanf("%lld%lld",&n,&W);
	for(ll i=0;i<n;i++){scanf("%lld%lld",&wt[i],&vl[i]);}
	dp[0]=0;
	for(ll i=0;i<n;i++){
		for(ll j=maxN-1;j>=0;j--){
			if(dp[j]+wt[i]<=W){min(dp[j+vl[i]],dp[j]+wt[i]);}
		}
	}
	for(ll i=maxN-1;i>=0;i--){if(dp[i]!=inf){printf("%lld",i);}}
}
