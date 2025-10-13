#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=105;
string a,b,lcs;
ll m,n;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;m=a.size(),n=b.size();
	a='#'+a,b='#'+b;
	vector<vector<ll>>dp(m+5,vector<ll>(n+5,0));
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){
			if(a[i]==b[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			}else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	// cout<<dp[m][n]<<"\n";
	ll i=m,j=n;
	while(i>0&&j>0){
		if(a[i]==b[j]){
			lcs.push_back(a[i]),i--,j--;
		}else{
			if(dp[i-1][j]>=dp[i][j-1]){i--;}else{j--;}
		}
	}
	for(ll i=lcs.size()-1;i>=0;i--){cout<<lcs[i];}
}

