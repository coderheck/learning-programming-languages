// toi yeu sliding window !!!!!!!
#include <iostream>
using namespace std;
#define ll long long 
const ll fuck=1000000007;
ll n,k,a[1000005],tmm=fuck;
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<k;i++){tmm=min(tmm,a[i]);}
	cout<<tmm<<" ";
	for(ll i=k;i<n;i++){
		if(a[i-k]==tmm){tmm=a[i-k+1];}
		tmm=min(tmm,a[i]);
		cout<<tmm<<" ";
	}
}
