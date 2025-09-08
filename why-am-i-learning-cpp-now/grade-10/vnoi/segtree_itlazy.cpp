#include <iostream>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=1000005;
const ll fuck=100000000007;
struct node{ll val=0,laz=0;}st[5*maxN];
ll n,q,t,u,v,x,a[maxN];
void make(ll id,ll l,ll r){
	if(l==r){st[id].val=a[l];return;}
	ll m=l+r>>1;
	make(id<<1,l,m);make(id<<1|1,m+1,r);
	st[id].val=max(st[id<<1].val,st[id<<1|1].val);
}
void psh(ll id){
	if(st[id].laz){
		st[id<<1].val+=st[id].laz;
		st[id<<1].laz+=st[id].laz;
		st[id<<1|1].val+=st[id].laz;
		st[id<<1|1].laz+=st[id].laz;
		st[id].laz=0;
	}
}
void upd(ll id,ll l,ll r,ll u,ll v,ll val){
	if(u>r||v<l){return;}
	if(u<=l&&v>=r){st[id].val+=val;st[id].laz+=val;return;}
	ll m=l+r>>1;
	psh(id);
	upd(id<<1,l,m,u,v,val);upd(id<<1|1,m+1,r,u,v,val);
	st[id].val=max(st[id<<1].val,st[id<<1|1].val);
}
ll fch(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return -fuck;}
	if(u<=l&&v>=r){return st[id].val;}
	psh(id);
	ll m=l+r>>1;
	return max(fch(id<<1,l,m,u,v),fch(id<<1|1,m+1,r,u,v));
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	make(1,1,n);
	cin>>q;
	while(q--){
		cin>>t>>u>>v;
		if(t&1){
			cin>>x;
			upd(1,1,n,u,v,x);
		}else{
			cout<<fch(1,1,n,u,v)<<"\n";
		}
	}
}

