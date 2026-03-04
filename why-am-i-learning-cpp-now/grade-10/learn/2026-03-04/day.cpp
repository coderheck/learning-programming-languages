#include <cstring>
#include <iostream>
using namespace std;
#define tname "day"
#define ll long long
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
ll n,k,a[1005];
bool dp[105],cur[105];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        a[i]=((a[i]%k)+k)%k;
    }
    dp[a[1]]=true;
    for(ll i=2;i<=n;i++){
        memset(cur,false,sizeof cur);
        for(ll r=0;r<k;r++){
            if(dp[r]){
                cur[(r+a[i])%k]=cur[(r-a[i]+k)%k]=true;
            }
        }
        for(ll r=0;r<k;r++){dp[r]=cur[r];}
    }
    lout(dp[0]?1:0);
}
