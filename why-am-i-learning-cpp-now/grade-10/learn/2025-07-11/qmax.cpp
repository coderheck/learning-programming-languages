#include<iostream>
using namespace std;
#define ll long long 
const ll maxN=100000;
const ll fuck=1000000007;
struct node{ll laz,val;}st[4*maxN+5];
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,m,u,v,k,p;
void down(ll id){
	ll t=st[id].laz;
	st[2*id].val+=t;st[2*id].laz+=t;
	st[2*id+1].val+=t;st[2*id+1].laz+=t;
	st[id].laz=0;
}
void update(ll id,ll l,ll r,ll u,ll v,ll val){
	if(u>r||v<l){return;}
	if(u<=l&&v>=r){st[id].val+=val;st[id].laz+=val;return;}
	down(id);
	ll m=l+(r-l)/2;
	update(2*id,l,m,u,v,val);
	update(2*id+1,m+1,r,u,v,val);
	st[id].val=max(st[2*id].val,st[2*id+1].val);
}
ll get(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return -fuck;}
	if(u<=l&&v>=r){return st[id].val;}
	down(id);
	ll m=l+(r-l)/2;
	return max(get(2*id,l,m,u,v),get(2*id+1,m+1,r,u,v));
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	while(m--){
		cin>>u>>v>>k;
		update(1,1,n,u,v,k);
	}
	cin>>p;
	while(p--){
		cin>>u>>v;
		cout<<get(1,1,n,u,v)<<"\n";
	}
}
