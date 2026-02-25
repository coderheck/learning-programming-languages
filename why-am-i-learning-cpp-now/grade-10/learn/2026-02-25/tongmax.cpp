#include <iostream>
#include <string>
using namespace std;
#define tname "tongmax"
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=2005,modN=1000000007,inff=-(1LL<<62);
ll n,m,p[maxN][maxN],dp[maxN][maxN];
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){cin>>p[i][j];}
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){dp[i][j]=inff;}
	}
	dp[1][1]=p[1][1];
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			if(i==1&&j==1){continue;}
			// ll ans=inff;
			// if(i>1){ans=max(ans,dp[i-1][j]);}
			// if(j>1){ans=max(ans,dp[i][j-1]);}
			dp[i][j]=p[i][j]+max((i>1?dp[i-1][j]:inff),(j>1?dp[i][j-1]:inff));
		}
	}
	lout(dp[n][m]);
}


