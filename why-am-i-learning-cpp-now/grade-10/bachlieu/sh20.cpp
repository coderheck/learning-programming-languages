#include <iostream>
using namespace std;
#define ll long long 
const ll def=1000000007;
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll n,s=0,res=1000000007,a[205];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];s+=a[i];}
	for(ll i=0;i<n;i++){
		if(a[i]==s-a[i]){res=min(res,a[i]);}
	}
	if(res==def){cout<<"N";}else{cout<<res;}
}
