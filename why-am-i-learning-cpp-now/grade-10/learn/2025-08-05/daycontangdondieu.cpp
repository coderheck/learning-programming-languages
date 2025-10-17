#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
ll n,a[100005],res[100005],ans=0;
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	res[ans++]=a[0];
	for(ll i=1;i<n;i++){
		if(res[ans-1]<a[i]){
			res[ans++]=a[i];
		}else{
			ll j=lower_bound(res,res+ans,a[i])-res;
			res[j]=a[i];
		}
	}
	cout<<ans;
}
