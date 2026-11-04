#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "hsgso26_recurio"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll sub1=2005,sub2=200005,modn=2718281828;
ll t,n;
umap<ll,ll>dp;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	dp.reserve(sub1);
	dp[0]=1;
	for(ll i=1;i<=10;i++){
		dp[i]=0;
		for(ll j=1;j<=i;j++){
			dp[i]+=((j%modn)*(dp[i-j]%modn))%modn;
			oout(j<<"*"<<dp[i-j]<<" + ");
		}
		lout("= "<<dp[i]);
	}
	cin>>t;
	while(t--){
		ll a;cin>>a;
		lout(dp[a]);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
