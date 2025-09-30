#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
const ll maxN=1000005;
ll n,m,a,r,sum=0,res=0;umap<ll,ll>cnt;
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n>>m;
	cnt[0]=1;
	for(ll i=1;i<=n;i++){
		cin>>a;
		sum+=a;
		r=(sum%m+m)%m;
		res+=cnt[r];
		cnt[r]++;
	}
	cout<<res;
}
