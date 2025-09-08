#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=1000005;
ll n,q,t,u,v,st[4*maxN];
void upd(ll id,ll l,ll r,ll i,ll val){
	if(i<l||i>r){return;}
	if(l==r){st[id]=val;return;}
	ll m=l+r>>1;
	upd(id<<1,l,m,i,val);upd(id<<1|1,m+1,r,i,val);
	st[id]=st[id<<1]+st[id<<1|1];
}
ll fch(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return 0;}
	if(u<=l&&v>=r){return st[id];}
	ll m=l+r>>1;
	return fch(id<<1,l,m,u,v)+fch(id<<1|1,m+1,r,u,v);
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n>>q;
	while(q--){
		cin>>t>>u>>v;
		if(t&1){
			upd(1,1,n,u,v);
		}else{
			cout<<fch(1,1,n,u,v)<<"\n";
		}
	}
}
