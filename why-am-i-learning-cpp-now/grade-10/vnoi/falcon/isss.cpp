#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
const ll maxN=100005;
const ll maxA=100005;
ll n,res=-1,a[maxN],w[maxN],maxSumAt[maxN],t[maxN];
void upd(ll id,ll val){
	while(id<maxA){
		t[id]=max(t[id],val);id+=id&-id;
	}
}
ll fch(ll id){
	ll r=0;
	while(id>0){
		r=max(r,t[id]);id-=id&-id;
	}
	return r;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){cin>>w[i];}
	for(ll i=1;i<=n;i++){
		maxSumAt[i]=fch(a[i]-1)+w[i];
		res=max(res,maxSumAt[i]);
		upd(a[i],maxSumAt[i]);
	}
	cout<<res;
}
