#include<iostream>
using namespace std;
#define ll long long 
const ll maxN=1000000;
const ll fuck=1000000007;
ll gcd(const ll& a,const ll& b){return(!b)?a:gcd(b,a%b);}
ll n,q,a[maxN+5],st[4*maxN+5],t,u,v;
void upd(ll id,ll l,ll r,ll i,ll val){
	if(i<l||i>r){return;}
	if(l==r){st[id]=val;return;}
	ll m=l+(r-l)/2;
	upd(2*id,l,m,i,val);
	upd(2*id+1,m+1,r,i,val);
	st[id]=gcd(st[2*id],st[2*id+1]);
}
ll getGcd(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return 0;}
	if(u<=l&&v>=r){return st[id];}
	ll m=l+(r-l)/2;
	ll t1=getGcd(2*id,l,m,u,v),t2=getGcd(2*id+1,m+1,r,u,v);
	return gcd(t1,t2);
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	while(q--){
		cin>>t>>u>>v;
		if(t&1){upd(1,1,n,u,v);}else{cout<<getGcd(1,1,n,u,v)<<"\n";}
	}
}
