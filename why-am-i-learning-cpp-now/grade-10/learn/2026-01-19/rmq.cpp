#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long
#define tname "rmq"
#define txp(x) (1<<(x))
const ll maxN=100005,maxE=17; // 2^17 = 131072 >= 100000
ll n,m,a[maxN];
struct spt{
    vector<vector<ll>>dp;
    spt(const ll &sz){dp.resize(maxE,vector<ll>(sz));}
    void init(){
        for(ll i=1;i<=n;i++){dp[0][i]=a[i];}
        for(ll e=1;e<=log2(n);e++){
            for(ll i=1;i+txp(e)-1<=n;i++){
                dp[e][i]=min(dp[e-1][i],dp[e-1][i+txp(e-1)]);
            }
        }
    }
    ll quer(const ll &l,const ll &r){
        ll k=log2(r-l+1);
        return min(dp[k][l],dp[k][r-txp(k)+1]);
    }
};
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    spt sp(n+5);
    sp.init();
    while(m--){
        ll l,r;cin>>l>>r;
        cout<<sp.quer(l,r)<<"\n";
        cerr<<sp.quer(l,r)<<"\n";
    }
}
