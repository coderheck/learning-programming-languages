#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
void rev(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll ds[20],dz=0,dp[20][2][]; //dp[pos][sml][cnt]
ll sol(ll pos,ll sml,ll num,umap<ll,ll>cnt,bool uniq){
	if(!uniq){return 0;}
	if(pos==dz){return 1;}
	if(dp[pos][sml][num][uniq]
}
ll f(ll x){
	if(x<0){return 0;}
	if(!x){return 1;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	rev(ds,dz);
	// memset(
}
ll a,b;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
	cout<<f(b)-f(a-1);
}
