#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=10005;
const ll limN=100000005;
ll n,l=0,r=0,res=0,a[10005];
// char pref[100000005]={0};
// void preproc(){
// 	ll x=1,i=1;
// 	while(x<limN){pref[x]=1;i++;x+=i;}
// }
bool checkN(const ll x){
	ll k=8LL*x+1,r=(ll)sqrt(k);
	return(k==r*r);
}
int main(){
	// preproc();
	scanf("%lld",&n);
	for(ll i=0;i<n;i++){scanf("%lld",&a[i]);}
	for(;r<n;r++){
		if(checkN(a[r])){
			while(!checkN(a[l])){l++;}
			res=max(res,r-l+1);
		}else{l=r;}
	}
	printf("%lld",res);
}
