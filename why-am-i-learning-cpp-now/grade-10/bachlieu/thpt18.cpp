#include <unordered_map>
#include <iostream>
using namespace std;
#define ll long long 
#define umap unordered_map
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,res=1,a[1000005];umap<ll,ll>cnt;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];cnt[a[i]]++;}
	for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		res=max(res,i->second);
	}
	cout<<res;
}
