#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define umap unordered_map
ll n,m,a[1000005],res=0;
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=0;i<n;i++){cin>>a[i];}
	sort(a,a+n);
	for(ll l=0;l<n;l++){
		ll r=upper_bound(a+l+1,a+n,m-a[l])-a;
		res+=r-(l+1);
	}
	cout<<res;
}
