#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=1000005;
ll n,a[maxN],res=0,pr[maxN];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=1;i<n-1;i++){
		if(a[i]>a[i-1]&&a[i]>a[i+1]){pr[res++]=a[i];}
	}
	cout<<res<<"\n";
	for(ll i=0;i<res;i++){cout<<pr[i]<<" ";}
}
