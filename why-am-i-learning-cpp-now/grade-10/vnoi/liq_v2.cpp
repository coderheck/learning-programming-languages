#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=1000;
ll n,ans=1,dp[maxN+5],a[maxN+5],back[maxN+5],truyvet[maxN+5],lst=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		dp[i]=1;
		back[i]=0;
		for(ll j=1;j<i;j++){
			if(a[i]>a[j]&&dp[i]<dp[j]+1){
				dp[i]=dp[j]+1;
				back[i]=j;
			}
		}
		if(dp[i]>ans){ans=dp[i];lst=i;}
	}
	ll k=ans;
	while(lst!=0){
		truyvet[k--]=a[lst]; // truyvet[k]=a[lst]; k--;
		lst=back[lst];
	}
	cout<<ans<<"\n";
	for(ll i=1;i<=ans;i++){cout<<truyvet[i]<<" ";}
}

