#include <iostream>
using namespace std;
#define ll long long 
#define taskname "water"
const ll maxN=100005;
ll n,k,dp[maxN];
bool cockcheck(const ll &len){
	for(ll r=len+1;r<=n;r++){
		ll l=r-len+1;
		if(dp[r]-dp[l]<=k){return true;}
	}
	return false;
}
void bitchsearch(){
	ll l=1,r=n,m,res=n;
	while(l<=r){
		m=(l+r)>>1;
		if(cockcheck(m)){res=m;l=m+1;}else{r=m-1;}
	}
	cout<<res;
}
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>dp[i];dp[i]=dp[i-1]+!dp[i];}
	bitchsearch();
}
