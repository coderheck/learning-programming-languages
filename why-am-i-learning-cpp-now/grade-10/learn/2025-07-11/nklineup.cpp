#include<iostream>
using namespace std;
#define ll long long 
const ll maxN=50000;
const ll fuck=1000000007;
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll n,q,x,y,a[maxN+5],st_min[4*maxN+5],st_max[4*maxN+5];
void build_min(ll id,ll l,ll r){
	if(l==r){st_min[id]=a[l];return;}
	ll m=l+(r-l)/2;
	build_min(2*id,l,m);build_min(2*id+1,m+1,r);
	st_min[id]=min(st_min[2*id],st_min[2*id+1]);
}
void build_max(ll id,ll l,ll r){
	if(l==r){st_max[id]=a[l];return;}
	ll m=l+(r-l)/2;
	build_max(2*id,l,m);build_max(2*id+1,m+1,r);
	st_max[id]=max(st_max[2*id],st_max[2*id+1]);
}
ll getMax(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return -fuck;}
	if(u<=l&&v>=r){return st_max[id];}
	ll m=l+(r-l)/2;
	ll t1=getMax(2*id,l,m,u,v),t2=getMax(2*id+1,m+1,r,u,v);
	return max(t1,t2);
}
ll getMin(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return fuck;}
	if(u<=l&&v>=r){return st_min[id];}
	ll m=l+(r-l)/2;
	ll t1=getMin(2*id,l,m,u,v),t2=getMin(2*id+1,m+1,r,u,v);
	return min(t1,t2);
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	build_min(1,1,n);build_max(1,1,n);
	while(q--){
		cin>>x>>y;
		cout<<getMax(1,1,n,x,y)-getMin(1,1,n,x,y)<<"\n";
	}
}
