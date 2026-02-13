#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define tname "bai2"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=100005;
ll n,m,a[maxN],sum[maxN];
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>a[i];sum[i]=sum[i-1]+a[i];}
    vector<ll>dp(n+5,LLONG_MAX);
    dp[0]=0;
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<i;j++){
            if(sum[i]-sum[j]<=m){dp[i]=min(dp[i],dp[j]+1);}
        }
    }
    lout(dp[n]);
}
