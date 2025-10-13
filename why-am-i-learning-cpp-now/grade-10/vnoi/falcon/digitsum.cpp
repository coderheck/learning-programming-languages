#include <stdio.h>
#include <string.h>
#define ll long long 
const ll modN=1000000007;
ll tmm;
void reverse(ll a[],ll sz){for(ll i=0;i<sz/2;i++){tmm=a[i];a[i]=a[sz-i-1],a[sz-i-1]=tmm;}}
ll a,b,dp[20][2][200],ds[20],dz=0;
ll sol(ll pos,ll sml,ll sum){
	if(pos==dz){return sum;}
	if(dp[pos][sml][sum]!=-1){return dp[pos][sml][sum];}
	ll lim=sml?ds[pos]:9,rt=0;
	for(ll d=0;d<=lim;d++){
		rt=(rt+sol(pos+1,sml&&d==lim,sum+d))%modN;
	}
	return dp[pos][sml][sum]=rt;
}
ll f(ll x){
	if(x<=0){return 0;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	reverse(ds,dz);
	memset(dp,-1,sizeof dp);
	return (sol(0,1,0)+modN)%modN;
}
int main(){
	scanf("%lld%lld",&a,&b);
	printf("%lld",(f(b)-f(a-1)+modN)%modN);
}
