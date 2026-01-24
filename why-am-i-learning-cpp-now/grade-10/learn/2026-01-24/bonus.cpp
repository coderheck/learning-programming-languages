#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long
#define tname "bonus"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define debug(x) cerr<<"debug "<<(x)<<"\n"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define txp(x) (1<<(x))
const ll maxN=300005,maxLog=19;
ll n,k,res=0,a[maxN],st[maxN*4];
struct spmin{
	vector<vector<ll>>dp;
	void init(const ll &__n){
	    dp.resize(maxLog,vector<ll>(__n+5));
		for(ll i=1;i<=n;i++){dp[0][i]=a[i];}
		for(ll e=1;e<=log2(n);e++){
			for(ll i=1;i+txp(e)-1<=n;i++){
				dp[e][i]=min(dp[e-1][i],dp[e-1][i+txp(e-1)]);
			}
		}
	}
	ll quer(const ll &l,const ll &r){
		if(l==r){return a[l];}
		ll k=log2(r-l+1);
		return min(dp[k][l],dp[k][r-txp(k)+1]);
	}
};
struct spmax{
	vector<vector<ll>>dp;
	void init(const ll &__n){
	    dp.resize(maxLog,vector<ll>(__n+5));
		for(ll i=1;i<=n;i++){dp[0][i]=a[i];}
		for(ll e=1;e<=log2(n);e++){
			for(ll i=1;i+txp(e)-1<=n;i++){
				dp[e][i]=max(dp[e-1][i],dp[e-1][i+txp(e-1)]);
			}
		}
	}
	ll quer(const ll &l,const ll &r){
		if(l==r){return a[l];}
		ll k=log2(r-l+1);
		return max(dp[k][l],dp[k][r-txp(k)+1]);
	}
};
void build(ll id,ll l,ll r){
    if(l==r){st[id]=a[l];return;}
    ll m=(l+r)>>1;
    build(id<<1,l,m);build(id<<1|1,m+1,r);
    st[id]=st[id<<1]+st[id<<1|1];
}
ll ssum(ll id,ll l,ll r,ll u,ll v){
    if(u>r||v<l){return 0;}
    if(u<=l&&v>=r){return st[id];}
    ll m=(l+r)>>1;
    return ssum(id<<1,l,m,u,v)+ssum(id<<1|1,m+1,r,u,v);
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
	cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    spmax sp1;spmin sp2;
    sp1.init(n);sp2.init(n);
    build(1,1,n);
    for(ll i=1;i<=n;i++){
        ll l=i,r=n,ans=i,m;
        while(l<=r){
            m=(l+r)>>1;
            if(sp1.quer(i,m)-sp2.quer(i,m)<=k){
                ans=m;l=m+1;
            }else{
                r=m-1;
            }
        }
        res=max(res,ssum(1,1,n,i,ans));
    }
    cout<<res;
}
// chặt nhị phân để tìm vị trí pos xa nhất mà sparse table max - min <= k
// segtree để tìm prefix sum [i; pos]
