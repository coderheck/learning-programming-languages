#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=1000005;
ll n,a[maxN],p[maxN],res=0;
umap<ll,ll>cnt;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	p[0]=0;cnt[0]=1;
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){p[i]=p[i-1]+a[i];cnt[p[i]-i]++;}
	// for(ll k=1;k<=n;k++){
	// 	res+=(p[k]-p[0]==k);
	// 	for(ll r=k+1;r<=n;r++){res+=(p[r]-p[r-k]==k);}
	// }
	for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		res+=i->second*(i->second-1)/2;
	}
	cout<<res;
}
