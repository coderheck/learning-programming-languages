#include <string.h>
#include <stdio.h>
#define ll long long 
const ll maxP=450;
char pr[455];
char l[50],r[50];
ll k,ds[55],dz=0,dp[55][2][455][455]; // dp[pos][sml][sum][rem]
ll sol(ll pos,ll sml,ll sum,ll rem){
	if(pos==dz){return(!rem&&!pr[sum]);}
	if(dp[pos][sml][sum][rem]!=-1){return dp[pos][sml][sum][rem];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		res+=sol(pos+1,sml&&d==lim,sum+d,(rem*10+d)%k);
	}
	return dp[pos][sml][sum][rem]=res;
}
ll f(char x[]){
	dz=strlen(x);
	for(ll i=0;i<dz;i++){ds[i]=x[i]-'0';}
	memset(dp,-1,sizeof dp);
	return sol(0,1,0,0);
}

void dec(char *x) {
    ll n=strlen(x);
    for(int i=n-1;i>=0;i--){if(x[i]>'0'){x[i]--;break;}else{x[i]='9';}}
    if(x[0]=='0'&&n>1){memmove(x,x+1,n);}
}
int main(){
	pr[0]=pr[1]=1;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=1;}
		}
	}
	scanf("%s %s %lld",l,r,&k);
	dec(l);
	printf("%lld",f(r)-f(l));
}
