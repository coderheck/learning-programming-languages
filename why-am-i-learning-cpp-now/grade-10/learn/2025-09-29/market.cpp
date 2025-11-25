#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
ll n,m,x[5005],c[100005],dp[100005],minc[100005];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>x[i];}
	for(ll i=1;i<=m;i++){cin>>c[i];}
	sort(x+1,x+n+1);
	for(int i=1;i<=n;i++){dp[i]=1000000007;}
	minc[m]=c[m],dp[0]=0;
	for(ll i=m-1;i>=1;i--){minc[i]=min(minc[i+1],c[i]);}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=i;j++){
			dp[i]=min(dp[i],dp[j-1]+minc[x[i]-x[j]+1]);
		}
	}
	cout<<dp[n];
}
