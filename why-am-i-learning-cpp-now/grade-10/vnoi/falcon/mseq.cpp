#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "mseq"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=200005;
ll n,a[maxN],dp[maxN];
unordered_map<ll,ll>cnt;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(int i=1;i<=n;i++){cin>>a[i];}
    for(int i=1,l;i<=n;i++){
        cnt[i]=dp[i]=dp[i-1];
        if(a[i]<=i){
            l=i-a[i]+1;
            cnt[l]++,dp[i]=max(dp[i],cnt[l]);
        }
    }
    lout(n-dp[n]);
}
