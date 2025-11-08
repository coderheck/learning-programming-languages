#include <algorithm>
#include <stdio.h>
using namespace std;
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=10005;
const ll fuck=100000000007;
ll n,res=0,resmax=-1,a[maxN],sum[maxN];
void check(const ll& a,const ll& b,const ll& c){
	if(a==(b+c)/2 || b==(a+c)/2 || c==(a+b)/2){
		ll s=a+b+c;
		res++;resmax=max(resmax,s);
	}
}
void bruh(){
	for(ll i=1;i<=n;i++){
		ll max1=-fuck;
		for(ll j=i+1;j<=n;j++){
			ll tb=(a[i]+a[j])>>1;
			if(!((a[i]+a[j])&1)){
				ll k=lower_bound(a+1,a+1+n,tb)-a;
				if(tb==a[k]){res++;max1=max(max1,a[i]+a[j]+a[k]);}
			}
		}
		resmax=max(resmax,max1);
	}
}
int main(){
	if(fopen("atriset.inp","r")){
		freopen("atriset.inp","r",stdin);
		freopen("atriset.out","w",stdout);
	}
	// cin.tie(0)->sync_with_stdio(0);
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){scanf("%lld",&a[i]);/*sum[i]=sum[i-1]+a[i];*/}
	// if(n<=100){
	// 	for(ll i=1;i<=n;i++){
	// 		for(ll j=i+1;j<=n-1;j++){
	// 			for(ll k=j+1;k<=n-2;k++){
	// 				if(i!=j&&i!=k&&j!=k){check(a[i],a[j],a[k]);}
	// 			}
	// 		}
	// 	}
	// }
	sort(a+1,a+n+1);
	bruh();
	printf("%lld\n%lld",res,resmax);
}
