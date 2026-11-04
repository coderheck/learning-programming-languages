#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
using namespace std;
#define tname "bacthang"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<62;
ll n,k,a[maxn];
struct seg{
	vector<ll>st;
	void init(){st.assign(n*4+5,0);}
	void upd(ll i,ll v,ll id=1,ll l=1,ll r=n){
		if(l==r){st[id]=v;return;}
		ll m=(l+r)>>1;
		if(i<=m){
			upd(i,v,id<<1,l,m);
		}else{
			upd(i,v,id<<1|1,m+1,r);
		}
		st[id]=max(st[id<<1],st[id<<1|1]);
	}
	ll get(ll u,ll v,ll id=1,ll l=1,ll r=n){
		if(u>r||v<l){return -inff;}
		if(u<=l&&v>=r){return st[id];}
		ll m=(l+r)>>1;
		return max(get(u,v,id<<1,l,m),get(u,v,id<<1|1,m+1,r));
	}
};
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	vector<ll>dp(n+5,-inff);
	dp[1]=a[1];
	if(n<=5000){
		seg falcon;
		falcon.init();
		falcon.upd(1,dp[1]);
		for(ll i=2;i<=n;i++){
			// ll xx=-inff;
			// for(ll j=max(1ll,i-k);j<i;j++){
			// 	xx=max(xx,dp[j]);
			// }
			dp[i]=a[i]+falcon.get(max(1ll,i-k), i-1);
			falcon.upd(i,dp[i]);
		}
	}else{
		deque<ll>dq;
		dq.push_back(1);
		for(ll i=2;i<=n;i++){
			if(dq.size() and dq.front()<i-k){dq.pop_front();}
			dp[i]=a[i]+dp[dq.front()];
			while(dq.size() and dp[dq.back()]<=dp[i]){
				dq.pop_back();
			}
			dq.push_back(i);
		}
	}
	lout(dp[n]);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
