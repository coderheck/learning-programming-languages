#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=1000000;
const ll modN=1000000007;
ll n,a,res=1;umap<ll,ll>cnt;
void compute(){
	while(a%2==0){cnt[2]++;a/=2;}
	for(ll i=3;i*i<=a;i+=2){
		while(a%i==0){cnt[i]++;a/=i;}
	}
	if(a>1){cnt[a]++;}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	while(n--){
		cin>>a;
		compute();
	}
	for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		res=(res*(i->second+1))%modN;
	}
	cout<<res;
}
