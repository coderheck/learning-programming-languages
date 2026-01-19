#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define tname "rmq"
#define min(a,b) ((a)<(b)?(a):(b))
#define txp(x) (1<<(x)) // lấy 2^x
const ll maxN=100005,inff=100000000007;
ll n,m,a[maxN];
struct sptable{
	// 2^17 = 131072 >= maxN
	vector<vector<ll>>dp;ll __n;
	sptable(const ll &sz):__n(sz){dp.resize(17,vector<ll>(__n));}
	// dp[k][i] = min của đoạn bắt đầu từ u và có độ dài 2^k
	void init(){
		// bài toán cơ sở: đoạn từ i với độ dài 2^0 = 1 => chính a[i]
		for(ll i=1;i<=n;i++){dp[0][i]=a[i];}
		// các đoạn có độ dài 2^e (e là exponent)
		for(ll e=1;e<=log2(n);e++){
			// các đoạn bắt đầu từ i
			// (i <= n - 2^e + 1 <=> i + 2^e - 1 <= n)
			for(ll i=1;i+txp(e)-1<=n;i++){
				// min của đoạn [i; i + 2^e] là min của:
				// [i; i + 2^(e-1) - 1] và [i + 2^(e-1); i + 2^e]
				dp[e][i]=min(dp[e-1][i],dp[e-1][i+txp(e-1)]);
			}
		}
	}
	// min của đoạn [l; l + 2^k - 1] và [r - 2^k + 1; r]
	ll quer(const ll &l,const ll &r){
		ll k=log2(r-l+1); // 2^k <= (r-l+1) < 2^(k+1)
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
	sptable sp(n+5);
	for(ll i=1;i<=n;i++){cin>>a[i];}
	sp.init();
	for(ll i=1,l,r;i<=m;i++){
		cin>>l>>r;
		cout<<sp.quer(l,r)<<"\n";
	}
}
