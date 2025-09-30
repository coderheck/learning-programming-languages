#include <iostream>
using namespace std;
#define ll long long 
ll max(const ll& _a,const ll& _b){return(_a>_b)?_a:_b;}
ll min(const ll& _a,const ll& _b){return(_a<_b)?_a:_b;}
ll n,k,op=0,ed=0,s=0,ans=10000000007,a[1000005],res[1000005];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=0;i<n;i++){cin>>a[i];s+=a[i];}
	for(ll i=0;i<n;i++){
		if(i<k){
			res[i]=a[i];
		}else{
			ll minv=res[i-k];
			for(ll j=i-k+1;j<i;j++){minv=min(minv,res[j]);}
			res[i]=a[i]+minv;
		}
	}
	for(ll i=n-k;i<n;i++){if(i>=0){ans=min(ans,res[i]);}}
	cout<<s-ans;
}
