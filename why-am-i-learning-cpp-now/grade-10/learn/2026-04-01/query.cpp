#include <iostream>
using namespace std;
#define tname "query"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=100005,modN=1000000007;
struct node{
	ll sum=0,add=0,mul=1;
}st[4*maxN];
ll n,m,t,u,v,x,a[maxN];
void build(ll id,ll l,ll r){
	if(l==r){st[id].sum=a[l]%modN;return;}
	ll m=(l+r)>>1;
	build(id<<1,l,m);build(id<<1|1,m+1,r);
	st[id].sum=(st[id<<1].sum+st[id<<1|1].sum)%modN;
}
void psh(ll id,ll l,ll r){
	if(st[id].mul!=1){
		st[id].sum=(st[id].sum*st[id].mul)%modN;
		if(l!=r){
			st[id<<1].mul=(st[id<<1].mul*st[id].mul)%modN;
			st[id<<1].add=(st[id<<1].add*st[id].mul)%modN;
			st[id<<1|1].mul=(st[id<<1|1].mul*st[id].mul)%modN;
			st[id<<1|1].add=(st[id<<1|1].add*st[id].mul)%modN;
		}
		st[id].mul=1;
	}
	if(st[id].add){
		st[id].sum=(st[id].sum+(r-l+1)*st[id].add)%modN;
		if(l!=r){
			st[id<<1].add=(st[id<<1].add+st[id].add)%modN;
			st[id<<1|1].add=(st[id<<1|1].add+st[id].add)%modN;
		}
		st[id].add=0;
	}
}
void upd(ll id,ll l,ll r,ll u,ll v,ll t,ll val){
	psh(id,l,r);
	if(u>r||v<l){return;}
	if(u<=l&&v>=r){
	    if(t==1){
			st[id].add=(st[id].add+val)%modN;
		}else{
			st[id].mul=(st[id].mul*val)%modN;
			st[id].add=(st[id].add*val)%modN;
		}
		psh(id,l,r);
		return;
	}
	ll m=(l+r)>>1;
	upd(id<<1,l,m,u,v,t,val);upd(id<<1|1,m+1,r,u,v,t,val);
	st[id].sum=(st[id<<1].sum+st[id<<1|1].sum)%modN;
}
ll fetch(ll id,ll l,ll r,ll u,ll v){
	psh(id,l,r);
	if(u>r||v<l){return 0;}
	if(u<=l&&v>=r){return st[id].sum;}
	ll m=(l+r)>>1;
	return(fetch(id<<1,l,m,u,v)+fetch(id<<1|1,m+1,r,u,v))%modN;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	// build(1,1,n);
	while(m--){
		cin>>t>>u>>v;
		if(t==3){
			lout(fetch(1,1,n,u,v));
		}else{
			cin>>x;
			upd(1,1,n,u,v,t,x);
		}
	}
}
