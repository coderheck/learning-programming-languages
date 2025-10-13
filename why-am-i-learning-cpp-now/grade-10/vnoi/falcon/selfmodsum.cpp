#include <stdio.h>
#include <string.h>
#define ll long long 
ll tmm;
void reverse(ll a[],ll sz){for(ll i=0;i<sz/2;i++){tmm=a[i];a[i]=a[sz-i-1],a[sz-i-1]=tmm;}}
ll t,a,b,dp[19][2][165][165],ds[29],dz=0;
char git[19][2][165][165];
ll sol(ll pos,ll sml,ll sum,ll rem,ll ts){
	if(pos==dz){return(sum==ts&&!rem);}
	if(git[pos][sml][sum][rem]){return dp[pos][sml][sum][rem];}
	git[pos][sml][sum][rem]=1;
	ll lim=sml?ds[pos]:9,rt=0;
	for(ll d=0;d<=lim;d++){
		if(sum+d<=ts){
			rt+=sol(pos+1,sml&&d==lim,sum+d,(rem*10+d)%ts,ts);
		}
	}
	return dp[pos][sml][sum][rem]=rt;
}
ll f(ll x){
	if(x<=0){return 0;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	reverse(ds,dz);
	ll res=0;
	for(ll ts=1;ts<=9*dz;ts++){ // max sum of the number's digits
		memset(git,0,sizeof git);
		res+=sol(0,1,0,0,ts);
	}
	return res;
}
int main(){
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&a,&b);
		printf("%lld\n",f(b)-f(a-1));
	}
}

