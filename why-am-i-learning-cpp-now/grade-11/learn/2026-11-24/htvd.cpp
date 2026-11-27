#include <iostream>
#include <algorithm>
using namespace std;
#define tname "htvd"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=1005,inff=-(1ll<<62);
ll m,n,a[maxn][maxn],dp[maxn][maxn][2]; // dp[i][j][đã dùng thiết bị]
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;
	for(ll j=0;j<=n;j++){dp[0][j][0]=dp[0][j][1]=inff;}
	for(ll i=1;i<=m;i++){
		dp[i][0][0]=dp[i][0][1]=inff;
		for(ll j=1;j<=n;j++){cin>>a[i][j];}
	}
	dp[1][1][0]=a[1][1];
	dp[1][1][1]=a[1][1]*2;
	for(ll i=1;i<=m;i++){
		for(ll j=1;j<=n;j++){
			if(i==1&&j==1){continue;}
			dp[i][j][0] = max(dp[i-1][j][0], dp[i][j-1][0]) + a[i][j];
			ll	p10 = max(dp[i-1][j][1], dp[i][j-1][1]) + a[i][j],
				p11 = max(dp[i-1][j][0], dp[i][j-1][0]) + a[i][j]*2;
			dp[i][j][1] = max(p10,p11);
		}
	}
	lout(max(dp[m][n][0],dp[m][n][1]));
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
