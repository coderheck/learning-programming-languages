// về bản chất thì đề bài khá giống với bài G - ABC300 (https://atcoder.jp/contests/abc300/tasks/abc300_g)
// tuy nhiên thì đề bài trên lại 1. có giới hạn P <= 100 và 2. chỉ tính 1 -> N, đồng thời TL là 4s (!!)
// mãi mới AC được cho C
#include <stdio.h>
#define ll long long 
char pr[2000005];
ll p[2000005],prc=0;
void prSieve(ll lim){
	pr[0]=pr[1]=1;
	for(ll i=2;i*i<=lim;i++){
		if(!pr[i]){for(ll j=i*i;j<=lim;j+=i){pr[j]=1;}}
	}
	for(ll i=2;i<=lim;i++){
		if(!pr[i]){
			p[prc++]=i;
		}
	}
}
// ----==== rac ====----
// bool check(ll x){
// 	while(!(x&1)){x>>=1;}
// 	for(ll i=3;i<=k&&i*i<=x;i+=2){
// 		while(x%i==0){x/=i;}
// 	}
// 	return(x==1||x<=k);
// }
// ----==== rac ====----
ll k,a,b,res=0,x[20000005];
int main(){
	if(fopen("amplifiers.inp","r")){
		freopen("amplifiers.inp","r",stdin);
		freopen("amplifiers.out","w",stdout);
	}
	scanf("%lld%lld%lld",&k,&a,&b);
	prSieve(k);
	for(ll i=0;i<=b-a;i++){x[i]=a+i;}
	// for(ll i=0;i<x.size();i++){
	// 	for(ll j=0;j<prs.size();j++){
	// 		while(x[i]%prs[j]==0){x[i]/=prs[j];}
	// 	}
	// 	res+=x[i]==1;
	// }
	for(ll i=0;i<prc;i++){
		ll l=((a+p[i]-1)/p[i])*p[i]; // số đầu tiên chia hết cho p[i]
		for(ll j=l;j<=b;j+=p[i]){
			ll idx=j-a;
			while(x[idx]%p[i]==0){x[idx]/=p[i];}
		}
	}
	for(ll i=0;i<=b-a;i++){res+=x[i]==1?1:x[i]<=k;}
	printf("%lld",res);
}
