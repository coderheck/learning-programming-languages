#include <stdio.h>
#define ll long long 
void rvArr(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll a,b,dp[16][2][136],ds[16],dz=0;
ll sol(ll pos,ll sml,ll sum){
	if(pos==dz){return sum;}
	if(dp[pos][sml][sum]!=-1){return dp[pos][sml][sum];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		res+=sol(pos+1,sml&&(d==lim),sum+d);
	}
	return dp[pos][sml][sum]=res;
}
ll f(ll x){
	if(x<=0){return 0;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	rvArr(ds,dz);
	for(ll i=0;i<16;i++){
		for(ll j=0;j<2;j++){
			for(ll k=0;k<136;k++){dp[i][j][k]=-1;}
		}
	}
	return sol(0,1,0);
}
int main(){
	scanf("%lld%lld",&a,&b);
	printf("%lld",f(b)-f(a-1));
}

