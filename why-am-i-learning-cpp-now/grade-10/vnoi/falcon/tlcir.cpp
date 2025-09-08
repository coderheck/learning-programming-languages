#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=200005;
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,id,s,res=0,a[maxN],tr[maxN];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){
		tr[i]=a[(i-1+n)%n]+a[i]+a[(i+1)%n]; // what the fuck
	}
	for(ll i=0;i<n;i++){
		s=0,id=i;
		for(ll j=0;j<n/2;j++){
			s+=tr[id];
			id=(id+2)%n;
		}
		res=max(res,s);
	}
	cout<<res;
}
