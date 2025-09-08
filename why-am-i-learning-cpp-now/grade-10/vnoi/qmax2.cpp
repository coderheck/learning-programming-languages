#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=500005;
const ll fuck=-10000000007;
ll max(const ll& _a,const ll& _b){return(_a>_b)?_a:_b;}
struct node{ll val,laz;}st[4*maxN];
void push(ll id){
	ll delta=st[id].laz;
	st[2*id].val+=delta;
	st[2*id].laz+=delta;
	st[2*id+1].val+=delta;
	st[2*id+1].laz+=delta;
	st[id].laz=0;
}
ll pull(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return fuck;}
	if(u<=l&&v>=r){return st[id].val;}
	push(id);
	ll m=l+r>>1;
	return max(pull(2*id,l,m,u,v),pull(2*id+1,m+1,r,u,v));
}
void commit(ll id,ll l,ll r,ll u,ll v,ll val){
	if(u>r||v<l){return;}
	if(u<=l&&v>=r){st[id].val+=val;st[id].laz+=val;return;}
	push(id);
	ll m=l+r>>1;
	commit(2*id,l,m,u,v,val);
	commit(2*id+1,m+1,r,u,v,val);
	st[id].val=max(st[2*id].val,st[2*id+1].val);
}
ll n,m,t,u,v,w;
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>n>>m;
	while(m--){
		cin>>t;
		if(t&1){
			cin>>u>>v;
			cout<<pull(1,1,n,u,v)<<"\n";
		}else{
			cin>>u>>v>>w;
			commit(1,1,n,u,v,w);
		}
	}
}
