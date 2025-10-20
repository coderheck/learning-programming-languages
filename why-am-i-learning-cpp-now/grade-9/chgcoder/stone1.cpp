#include<stdio.h>
#define ll long long
ll n,k,a[100005],res=0,s=0,m;
bool check(){
	ll c=1,tmp=0;
	for(ll i=0;i<n;i++){
		if(a[i]>m){return false;}
		if(tmp+a[i]>m){
			c++;tmp=a[i];
		}else{
			tmp+=a[i];
		}
	}
	return c<=k;
}
int main(){
	scanf("%lld%lld",&n,&k);
	for(ll i=0;i<n;i++){scanf("%lld",&a[i]);s+=a[i];}
	ll l=1,r=s;
	while(l<=r){
		m=l+(r-l)/2;
		if(check()){res=m;r=m-1;}else{l=m+1;}
	}
	printf("%lld",res);
}
