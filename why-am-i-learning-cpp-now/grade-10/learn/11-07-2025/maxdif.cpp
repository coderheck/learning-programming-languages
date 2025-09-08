#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long 
const ll maxN=1000000;
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,k,a[maxN+5],d[maxN+5],st[4*maxN+5],res=1000000007;
void build(ll id,ll l,ll r){
	if(l==r){st[id]=d[l];return;}
	ll m=l+(r-l)/2;
	build(2*id,l,m);build(2*id+1,m+1,r);
	st[id]=max(st[2*id],st[2*id+1]);
}
ll get(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return -1000000007;}
	if(u<=l&&v>=r){return st[id];}
	ll m=l+(r-l)/2;
	return max(get(2*id,l,m,u,v),get(2*id+1,m+1,r,u,v));
}
int main(){
	cin.tie(0);ios::sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	sort(a+1,a+n+1);
	for(ll i=1;i<=n-1;i++){
		d[i]=a[i+1]-a[i];
	}
	build(1,1,n-1);
	ll m=n-k-1;
	for(ll i=0;i+m-1<=n-1;i++){
		ll kq=get(1,1,n-1,i,i+m-1);
		res=min(res,kq);
	}
	cout<<res;
}
