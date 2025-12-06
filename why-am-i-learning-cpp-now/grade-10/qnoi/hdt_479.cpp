#include <stdio.h>
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=100005;
ll gcd(const ll &a,const ll &b){return(!b)?a:gcd(b,a%b);}
ll n,k,l,r,res=-1,sum=0,cnt=0,h[maxN],b[maxN],good[maxN];
int main(){
	scanf("%lld%lld",&n,&k);
	for(ll i=0;i<n;i++){scanf("%lld",&h[i]);}
	for(ll i=0;i<n;i++){scanf("%lld",&b[i]);}
	for(ll i=0;i+1<n;i++){good[i]=gcd(h[i],h[i+1])>1;}
	for(ll i=0;i<k;i++){sum+=b[i],cnt+=good[i];}
	cnt-=good[k];
	if(cnt==k-1){res=max(res,sum);}
	for(l=1;l+k-1<n;l++){
		r=l+k-1;
		sum+=b[r]-b[l-1],cnt+=good[r-1]-good[l-1];
		res=(cnt==k-1)?max(res,sum):res;
	}
	printf("%lld",res);
}

