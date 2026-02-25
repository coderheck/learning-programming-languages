#include <iostream>
#include <string>
using namespace std;
#define tname "abc183_e"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=2005,modN=1000000007;
char p[maxN][maxN];
ll h,w,dp[maxN][maxN],x[maxN][maxN],y[maxN][maxN],z[maxN][maxN];
string s;
int main(){
	// if(fopen(tname".inp","r")){
	// 	freopen(tname".inp","r",stdin);
	// 	freopen(tname".out","w",stdout);
	// }
	cin.tie(0)->sync_with_stdio(0);
    cin>>h>>w;
    for(ll i=1;i<=h;i++){
		cin>>s;
		for(ll j=1;j<=w;j++){p[i][j]=s[j-1];}
	}
    dp[1][1]=1;
    for(ll i=1;i<=h;i++){
        for(ll j=1;j<=w;j++){
            if(i==1&&j==1){continue;}
            if(p[i][j]=='#'){
                dp[i][j]=0;
            }else if(p[i][j]=='.'){

            }
        }
    }
    lout(dp[h][w]);
}
