#include <iostream>
#include <vector>
using namespace std;
#define max(a,b) ((a)>(b)?(a):(b))
int n,lim;
int main(){
	if(fopen("select.inp","r")){
		freopen("select.inp","r",stdin);
		// freopen("select.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;lim=1<<n;
	vector<vector<int>>a(n+5,vector<int>(n+5));
	vector<int>dp(lim,-1);
	dp[0]=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){cin>>a[i][j];}
	}
	for(int mask=0;mask<lim;mask++){
		int select=__builtin_popcount(mask);
		if(select>=n){continue;}
		for(int j=0;j<n;j++){
			if(!(mask&(1<<j))){
				int newmask=mask|(1<<j);
				dp[newmask]=max(dp[newmask],dp[mask]+a[select][j]);
			}
		}
	}
	cout<<dp[lim-1];
}
