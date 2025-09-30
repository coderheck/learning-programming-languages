#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=1000;
ll n,ans=1,dp[maxN+5],a[maxN+5];
vector<ll>res;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		dp[i]=0;
		for(ll j=i-1;j>=1;j--){
			if(a[i]>a[j]){dp[i]=max(dp[i],dp[j]);}
		}
		dp[i]+=1;
		ans=max(ans,dp[i]);
	}
	cout<<ans;
}
