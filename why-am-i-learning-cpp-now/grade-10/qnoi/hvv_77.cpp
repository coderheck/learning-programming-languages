#include <stdio.h>
#include <algorithm>
using namespace std;
#define ll long long 
#define tname "hvv_77"
const ll maxN=2000005;
ll n,d,a[maxN],res=0,j=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	scanf("%lld%lld",&n,&d);
	for(ll i=0;i<n;i++){scanf("%lld",&a[i]);}
	sort(a,a+n);
	for(ll i=0;i<n;i++){
		if(j<i+1){j=i+1;} // tránh đặt lại j từng vòng lặp dẫn đến O(n)
		while(j<n&&a[j]-a[i]<=d){j++;}
		ll tm=j-i-1;
		if(tm>=2){
			res+=tm*(tm-1)/2;
			// for(ll k=i;k<=j-1;k++){cout<<a[k]<<" ";}
			// cout<<"\n";
		}
	}
	printf("%lld",res);
}
