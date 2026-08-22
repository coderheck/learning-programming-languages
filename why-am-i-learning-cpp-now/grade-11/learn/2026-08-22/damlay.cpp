// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// using namespace __gnu_pbds;
#define tname "damlay"
// #define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,inff=1ll<<60;
ll n,l,r,a[maxN];string b;
struct seg{
	vector<ll>st;
	seg(const ll &__sz){st.assign(__sz*4+5,inff);}
	void upd(const ll &i,const ll &val,const ll &id=1,const ll &l=1,const ll &r=n){
		if(i<l||i>r){return;}
		if(l==r){st[id]=val;return;}
		ll m=(l+r)>>1;
		upd(i,val,id<<1,l,m);upd(i,val,id<<1|1,m+1,r);
		st[id]=min(st[id<<1],st[id<<1|1]);
	}
	ll quer(const ll &u,const ll &v,const ll &id=1,const ll &l=1,const ll &r=n){
		if(u>r||v<l||u>v){return inff;}
		if(u<=l&&v>=r){return st[id];}
		ll m=(l+r)>>1;
		return min(quer(u,v,id<<1,l,m),quer(u,v,id<<1|1,m+1,r));
	}
	// cai dat seg chan vai chuong
	// https://safebooru.org/index.php?page=post&s=view&id=7057732
};
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>l>>r;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	cin>>b;b="#"+b;
	// nhảy được đến j với i+L <= j <= i+R => [i-R; i-L] nhảy đến được j
	// dp[i] = a[i] + min(dp[i-R] .. dp[i-L])
	if(n<=5000){ // sub 1: với mỗi dp[i] duyệt O(R-L+1)
		vector<ll>dp(n+5,inff);
		dp[1]=0;
		for(ll i=2;i<=n;i++){
			if(b[i]=='1'){continue;}
			ll minn=inff;
			for(ll j=max(i-r,1ll);j<=i-l;j++){
				if(b[j]=='0' && dp[j]!=inff){minn=min(minn,dp[j]);}
			}
			if(minn!=inff){dp[i]=minn+a[i];}
		}
		lout((dp[n] == inff ? -1 : dp[n]));
	}else{ // seg min
		seg falcon(n);
		falcon.upd(1,0);
		for(ll i=2;i<=n;i++){
			if(b[i]=='1'){continue;}
			ll minn=inff;
			minn=falcon.quer(max(i-r,1ll),i-l);
			if(minn!=inff){falcon.upd(i,minn+a[i]);}
		}
		ll res=falcon.quer(n,n);
		lout((res == inff ? -1 : res));
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

