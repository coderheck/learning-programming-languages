#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define umap unordered_map
ll n,k,r,a,s=0,res=0;umap<ll,ll>cnt;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cnt.reserve(2000000);
	cnt[0]=1;
	cin>>n>>k;
	while(n--){
		cin>>a;s+=a;
		r=(s%k+k)%k;
		res+=cnt[r]++;
	}
	cout<<res;
}
