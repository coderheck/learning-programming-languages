#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long 
#define tname "naughty"
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define txp(x) (1<<(x))
const ll maxN=100005,maxLog=17; // 2^17 = 131072 >= 10^5
ll n,k,a[maxN];
struct sptable{
	vector<vector<ll>>dp;ll __n;
	sptable(const ll &sz):__n(sz){dp.resize(maxLog,vector<ll>(__n+5));}
	void init(){
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
}sp(maxN);
ll getl(ll l,ll r,const ll &i){
	ll res=i,m;
	while(l<=r){
		m=l+r>>1;
		if(sp.quer(m,i)<=a[i]+k){res=m;r=m-1;}else{l=m+1;}
	}
	return res;
}
ll getr(ll l,ll r,const ll &i){
	ll res=i,m;
	while(l<=r){
		m=l+r>>1;
		if(sp.quer(i,m)<=a[i]+k){res=m;l=m+1;}else{r=m-1;}
	}
	return res;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	sp.init();
	for(ll i=1;i<=n;i++){
		ll lt=getl(1,i,i),rt=getr(i,n,i);
		cout<<rt-lt+1<<" ";
	}
}

