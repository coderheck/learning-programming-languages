#include <iostream>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=105;
ll m,n,a[maxN],b[maxN],lcs[maxN],apos[maxN],bpos[maxN],sz=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;
	vector<vector<ll>>dp(m+5,vector<ll>(n+5,0));
	for(ll i=1;i<=m;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){cin>>b[i];}
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){
			if(a[i]==b[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[m][n]<<"\n";
	ll i=m,j=n;
	while(i>0&&j>0){
		if(a[i]==b[j]){
			lcs[sz]=a[i],apos[sz]=i,bpos[sz]=j;
			sz++,i--,j--;
		}else{
			if(dp[i-1][j]>=dp[i][j-1]){i--;}else{j--;}
		}
	}
	for(ll i=sz-1;i>=0;i--){cout<<lcs[i]<<" ";}
	cout<<"\n";
	for(ll i=sz-1;i>=0;i--){cout<<apos[i]<<" ";}
	cout<<"\n";
	for(ll i=sz-1;i>=0;i--){cout<<bpos[i]<<" ";}
}
