#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long 
#define tname "frmq"
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define txp(x) (1<<(x))
const ll maxN=100005,maxLog=18; // 2^18 = 262144 >= 10^5
ll n,m,a[maxN],x,y;
struct sptable{
	vector<vector<ll>>dp;ll __n;
	sptable(const ll &sz):__n(sz){dp.resize(maxLog,vector<ll>(__n));}
	void init(){
		for(ll i=0;i<n;i++){dp[0][i]=a[i];} 
		for(ll e=1;e<=log2(n);e++){
			for(ll i=0;i+txp(e)-1<n;i++){
				dp[e][i]=max(dp[e-1][i],dp[e-1][i+txp(e-1)]);
			}
		}
	}
	ll quer(const ll &l,const ll &r){
		if(l==r){return a[l];}
		ll k=log2(r-l+1); // 2^k <= (r-l+1) < 2^(k+1)
		return max(dp[k][l],dp[k][r-txp(k)+1]);
	}
};
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	sptable sp(n+5);
	for(ll i=0;i<n;i++){cin>>a[i];}
	cin>>m>>x>>y;
	sp.init();
	ll res=sp.quer(x,y);
	for(ll i=2,l,r;i<=m;i++){
		l=x=(x+7)%(n-1),r=y=(y+11)%n;
		if(l>r){ll tm=l;l=r,r=tm;}
		res+=sp.quer(l,r);
	}
	cout<<res;
}
