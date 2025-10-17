#include<iostream>
using namespace std;
#define ll long long 
const ll maxn=500000;
const ll fuck=1000000007;
ll n,res=0,a[maxn+5],t[4LL*maxn+5];
ll getres(ll i){
	ll c=0;
	for(;i>=1;i-=i&-i){c+=t[i];}
	return c;
}
void upd(ll i,ll delta){
	for(;i<=n;i+=i&-i){t[i]+=delta;}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=n;i>=1;i--){
		res+=getres(a[i]-1);
		upd(a[i],1);
	}
	cout<<res;
}
