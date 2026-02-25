#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define tname "bessie"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=55,modN=1000000007;
char p[maxN][maxN];
ll T,n,k,dp[maxN][maxN][3][4];
// dp[x][y][lastDir][redirCount]: đường đi đến (x,y) với bước cuối
// cùng có hướng dir (0 là dưới, 1 là phải), redirCount là số lần
// chuyển hướng
vector<string>s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
        cin>>n>>k;
        for(ll i=1;i<=n;i++){cin>>s[i];s[i]="#"+s[i];}
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++){
                if(i==1&&j==1){continue;}
            }
        }
        lout(dp[n][n]);
	}
}
