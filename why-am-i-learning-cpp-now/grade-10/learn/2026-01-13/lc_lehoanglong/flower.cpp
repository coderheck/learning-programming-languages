#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define tname "flower"
#define ll long long
#define debug(x) cout<<(x)<<" ";
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll inff=1000000000007;
ll w,h,n,k;
struct pll{ll x,y;};
vector<pll>fl;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>w>>h>>n>>k;
    vector<vector<ll>>dp(w+5,vector<ll>(h+5,0));
    if(n==1){
        ll x,y,res=inff;cin>>x>>y;
        for(ll i=1;i<=w;i++){
            for(ll j=1;j<=h;j++){
                ll tm=k-(abs(x-i)+abs(y-j));
                if(tm<=0){
                    cout<<"0";return 0;
                }else{
                    res=min(res,tm);
                }
            }
        }
        cout<<res;
        return 0;
    }
    for(ll i=1;i<=n;i++){
        ll x,y;cin>>x>>y;
        fl.push_back({x,y});
        dp[x][y]=k;
    }
    for(ll i=1;i<=w;i++){
        for(ll j=1;j<=h;j++){
            ll mindist=inff;
            for(const pll &p:fl){
                mindist=min(mindist,abs(p.x-i)+abs(p.y-j));
            }
            if(k-mindist<0){cout<<"0";return 0;}
            dp[i][j]=k-mindist;
        }
    }
    ll res=inff;
    for(ll i=1;i<=w;i++){
        for(ll j=1;j<=h;j++){
            // cout<<dp[i][j]<<" ";
            res=min(res,dp[i][j]);
        }
        // cout<<"\n";
    }
    cout<<res;
}
