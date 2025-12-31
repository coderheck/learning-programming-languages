#include <iostream>
#include <cmath>
using namespace std;
#define ll long long 
#define tname "square"
bool checkcp(const ll &x){
	ll t=sqrt(x);
	return t*t==x;
}
ll n,k;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	if(k==2){
		// sub 1: 
		// -) vì chỉ có k=2 số nên k-1=1 => check a_k là số chính
		// phương (check chính phương có thể thực hiện trong O(1))
		// -) vì chỉ có k=2 số nên duyệt mọi a là số chính phương 
		// đến n/2
		for(ll i=1,ii=1;ii<=n/2;i++,ii=i*i){
			ii=i*i;
			ll j=n-ii; // ii là số chính phương của i 
			// cout<<ii<<" "<<j<<"\n";
			if(checkcp(j)){cout<<"YES\n"<<ii<<" "<<j;return 0;}
		}
		cout<<"NO";
	}
}
