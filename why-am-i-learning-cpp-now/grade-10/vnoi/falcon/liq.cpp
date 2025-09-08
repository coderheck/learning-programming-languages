#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=1005;
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,res=1,a[maxN],f[maxN];
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		f[i]=1;
		for(ll j=0;j<i;j++){
			if(a[j]<=a[i]){f[i]=max(f[i],f[j]+1);}
		}
		res=max(res,f[i]);
	}
	cout<<res;
}
