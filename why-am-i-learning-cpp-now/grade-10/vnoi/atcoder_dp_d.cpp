#include <stdio.h>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=105;
ll n,w;vector<ll>wt(maxN),vl(maxN);
int main(){
	scanf("%lld%lld",&n,&w);
	for(ll i=0;i<n;i++){scanf("%lld%lld",&wt[i],&vl[i]);}
	vector<ll>dp(w+5,0);
	for(ll i=1;i<=(ll)wt.size();i++){
		for(ll j=w;j>=wt[i-1];j--){
			dp[j]=max(dp[j],dp[j-wt[i-1]]+vl[i-1]);
		}
	}
	printf("%lld",dp[w]);
}
