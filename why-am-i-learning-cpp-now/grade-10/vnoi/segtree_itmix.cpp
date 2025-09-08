#include <iostream>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
const ll modN=1000000007;
struct node{
	ll sum=0,add=0,mul=1,set=-1;
}st[4*maxN];
ll n,m,t,u,v,x,a[maxN];
void build(ll id,ll l,ll r){
	if(l==r){st[id].sum=a[l]%modN;return;}
	ll m=l+r>>1;
	build(2*id,l,m);build(2*id+1,m+1,r);
	st[id].sum=(st[2*id].sum+st[2*id+1].sum)%modN;
}
void psh(ll id,ll l,ll r){
	if(st[id].set!=-1){
		st[id].sum=((r-l+1)*st[id].set)%modN;
		if(l!=r){
			st[2*id].set=st[2*id+1].set=st[id].set;
			st[2*id].add=st[2*id+1].add=0;
			st[2*id].mul=st[2*id+1].mul=1;
		}
		st[id].set=-1;
	}
	if(st[id].mul!=1){
		st[id].sum=(st[id].sum*st[id].mul)%modN;
		if(l!=r){
			if(st[2*id].set!=-1){
				st[2*id].set=(st[2*id].set*st[id].mul)%modN;
			}else{
				st[2*id].mul=(st[2*id].mul*st[id].mul)%modN;
				st[2*id].add=(st[2*id].add*st[id].mul)%modN;
			}
			if(st[2*id+1].set!=-1){
				st[2*id+1].set=(st[2*id+1].set*st[id].mul)%modN;
			}else{
				st[2*id+1].mul=(st[2*id+1].mul*st[id].mul)%modN;
				st[2*id+1].add=(st[2*id+1].add*st[id].mul)%modN;
			}
		}
		st[id].mul=1;
	}
	if(st[id].add){
		st[id].sum=(st[id].sum+(r-l+1)*st[id].add)%modN;
		if(l!=r){
			if(st[2*id].set!=-1){
				st[2*id].set=(st[2*id].set+st[id].add)%modN;
			}else{
				st[2*id].add=(st[2*id].add+st[id].add)%modN;
			}
			if(st[2*id+1].set!=-1){
				st[2*id+1].set=(st[2*id+1].set+st[id].add)%modN;
			}else{
				st[2*id+1].add=(st[2*id+1].add+st[id].add)%modN;
			}
		}
		st[id].add=0;
	}
}
void upd(ll id,ll l,ll r,ll u,ll v,ll t,ll val){
	psh(id,l,r);
	if(u>r||v<l){return;}
	if(u<=l&&v>=r){
		if(t==1){st[id].add=val;}else if(t==2){st[id].mul=val;}else if(t==3){st[id].set=val;}
		psh(id,l,r);
		return;
	}
	ll m=l+r>>1;
	upd(2*id,l,m,u,v,t,val);upd(2*id+1,m+1,r,u,v,t,val);
	st[id].sum=(st[2*id].sum+st[2*id+1].sum)%modN;
}
ll fetch(ll id,ll l,ll r,ll u,ll v){
	psh(id,l,r);
	if(u>r||v<l){return 0;}
	if(u<=l&&v>=r){return st[id].sum;}
	ll m=l+r>>1;
	return (fetch(2*id,l,m,u,v)+fetch(2*id+1,m+1,r,u,v))%modN;
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	build(1,1,n);
	while(m--){
		cin>>t>>u>>v;
		if(t==4){
			cout<<fetch(1,1,n,u,v)<<"\n";
		}else{
			cin>>x;
			upd(1,1,n,u,v,t,x);
		}
	}
}
