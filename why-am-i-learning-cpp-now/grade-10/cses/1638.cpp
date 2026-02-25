#include <iostream>
#include <string>
using namespace std;
#define tname "1638"
#define ll long long 
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1005,modN=1000000007;
ll n,dp[maxN][maxN];
char p[maxN][maxN];
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>s;
		for(ll j=1;j<=n;j++){p[i][j]=s[j-1];}
	}
	if(p[1][1]=='*'){lout(0);return 0;}
	dp[1][1]=1;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=n;j++){
			if(i==1&&j==1){continue;}
			if(p[i][j]=='*'){
				dp[i][j]=0;
			}else{
				dp[i][j]=(dp[i-1][j]+dp[i][j-1])%modN;
			}
		}
	}
	lout(dp[n][n]);
}

