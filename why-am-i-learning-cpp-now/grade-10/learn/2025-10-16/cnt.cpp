#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;
const ll maxN=100005;
ll n,s,a[maxN],res=0;
int main(){
	if(fopen("cnt.inp","r")){
		// freopen("cnt.inp","r",stdin);
		// freopen("cnt.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s;
	for(ll i=0;i<n;i++){cin>>a[i];}
	res+=(a[0]>s||a[0]<s*-1); // day con co so phan tu = 1
	for(ll i=1;i<n;i++){
		a[i]+=a[i-1]; // pref sum
		res+=(a[i]>s||a[i]<s*-1); // day con co so phan tu = 1
	}
	sort(a,a+n);
	for(ll i=0;i<n;i++){res+=n-(upper_bound(a,a+n,a[i]+s)-a);}
	cout<<res;
}
