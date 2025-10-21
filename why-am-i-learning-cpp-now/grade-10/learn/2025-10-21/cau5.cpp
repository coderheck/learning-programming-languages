#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;
#define ll long long 
const ll maxN=100005;
ll n,a[maxN];
vector<ll>lis,lds(maxN);
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>a[i];}
	for(ll i=0;i<n;i++){
		auto i1=upper_bound(lis.begin(),lis.end(),a[i]),
			 i2=upper_bound(lds.begin(),lds.end(),a[i],greater<ll>());
		if(i1==lis.end()){lis.push_back(a[i]);}else{*i1=a[i];}
		if(i2==lds.end()){lds.push_back(a[i]);}else{*i2=a[i];}
	}
	cout<<(n-lis.size()<n-lds.size()?n-lis.size():n-lds.size());
}
