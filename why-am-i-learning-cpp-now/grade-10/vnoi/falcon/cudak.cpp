#include <stdio.h>
#include <string.h>
#include <algorithm>
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
void rvArr(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll a,b,k,fb,dp[20][2][200],ds[20],dz=0,anss[100005],ans=0;
ll sol(ll pos,ll sml,ll sum,ll num){
	if(pos==dz){
		ll check=sum==k;
		if(check){anss[ans++]=num;}
		return check;
	}
	if(dp[pos][sml][sum]!=-1){return dp[pos][sml][sum];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		res+=sol(pos+1,sml&&(d==lim),sum+d,num*10+d);
	}
	return dp[pos][sml][sum]=res;
}
ll f(ll x){
	if(x<=0){return 0;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	rvArr(ds,dz);
	memset(dp,-1,sizeof dp);
	return sol(0,1,0,0);
}
int main(){
	scanf("%lld%lld%lld",&a,&b,&k);
	ll res=f(b)-f(a-1);
	std::sort(anss,anss+ans);
	printf("%lld\n%lld",res,anss[0]);
}
