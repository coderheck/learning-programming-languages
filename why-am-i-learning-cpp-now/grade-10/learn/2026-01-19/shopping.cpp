#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long
#define tname "shopping"
#define txp(x) (1LL<<(x))
const ll maxN=200005,maxE=18;
ll n,m,a[maxN];
struct spt{
    vector<vector<ll>>dp;
    spt(const ll &sz){dp.resize(maxE,vector<ll>(sz+5));}
    const void init(){
        for(ll i=1;i<=n;i++){dp[0][i]=a[i];}
        for(ll e=1;e<=log2(n);e++){
            for(ll i=1;i+txp(e)-1<=n;i++){
                dp[e][i]=min(dp[e-1][i],dp[e-1][i+txp(e-1)]);
            }
        }
    }
    const ll quer(const ll &l,const ll &r){
        ll k=log2(r-l+1);
        return min(dp[k][l],dp[k][r-txp(k)+1]);
    }
};
ll bitchsearch(spt &sp,const ll &l,const ll &r,const ll &mm){
    ll lt=l,rt=r,pos=-1;
    while(lt<=rt){
        ll m=(lt+rt)>>1;
        if(sp.quer(l,m)<=mm){pos=m,rt=m-1;}else{lt=m+1;}
    }
    return pos;
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    spt sp(n);
    sp.init();
    while(m--){
        ll t,l,r;cin>>t>>l>>r;
        while(t>0){
            ll pos=bitchsearch(sp,l,r,t);
            if(pos==-1){break;}
            t%=a[pos],l=pos+1;
            if(l>r){break;}
        }
        cout<<t<<"\n";
        cerr<<t<<"\n";
    }
}
