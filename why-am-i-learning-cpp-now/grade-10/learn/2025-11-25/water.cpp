#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
#define ll long long 
#define tname "water"
#define min(A,B) ((A)<(B)?(A):(B))
const ll maxn=25,inff=10000000007;
ll n,k,a[maxn][maxn],dp[1<<maxn],res=inff;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){cin>>a[i][j];}
	}
	memset(dp,inff,sizeof dp);
	dp[(1<<n)-1]=0;
	for(ll mask=(1<<n)-2;mask>=1;mask--){
		for(ll i=0;i<n;i++){
			if((mask&(1<<i))==0){
				ll pmask=mask|(1<<i);
				for(ll j=0;j<n;j++){
					if(mask>>j&1){dp[mask]=min(dp[mask],dp[pmask]+a[i][j]);}
				}
			}
		}
	}
	for(ll mask=1;mask<(1<<n);mask++){
		ll cnt=0;
		for(ll i=0;i<n;i++){cnt+=(mask>>i)&1;}
		if(cnt==k){res=min(res,dp[mask]);}
	}
	cout<<res;
}
