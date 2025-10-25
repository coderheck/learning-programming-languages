#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
void rev(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll ds[20],dz=0,dp[20][2][11][11]; //dp[pos][sml][prev1][prev2]
ll sol(ll pos,ll sml,ll p1,ll p2){ // order: prev1 - prev2 - current digit
	if(pos==dz){return (d>=p2&&p2>=p1)||(d<=p2&&p2<=p1);}
	if(dp[pos][sml][p1][p2]!=-1){return dp[pos][sml][p1][p2];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		if((d>=p2&&p2>=p1)||(d<=p2&&p2<=p1)){continue;}
		res+=sol(pos+1,sml&&d==lim,num*10+d,prev2,d);
	}
}
ll f(ll x){
	if(x<0){return 0;}
	if(!x){return 1;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	rev(ds,dz);
	memset(dp,-1,sizeof dp);
	return sol(0,1,10,10);
}
ll a,b;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
	cout<<f(b)-f(a-1);
}

