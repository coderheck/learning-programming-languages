#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
ll cd(const ll& n){
	ll r=0;
	for(ll i=1;i*i<=n;i++){
		if(!(n%i)){r+=1+(i!=n/i);}
	}
	return r%7;
}
ll n,res=0,a[105];umap<ll,ll>cnt;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){cnt[cd(a[i])]++;}
	for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		if(!i->first){
			res+=i->second*(i->second-1)/2;
		}else if(i->first<=3){
			res+=i->second*cnt[7-i->first];
		}
	}
	cout<<res;
}
