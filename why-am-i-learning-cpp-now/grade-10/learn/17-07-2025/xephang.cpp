#include<iostream>
using namespace std;
#define ll long long 
const ll maxn=50000;
const ll fuck=1000000007;
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll n,q,u,v,a[maxn+5],tmax[4*maxn+5],tmin[4*maxn+5];
void makeax(ll id,ll l,ll r){
	if(l==r){tmax[id]=a[l];return;}
	ll m=l+r>>1;
	makeax(2*id,l,m);makeax(2*id+1,m+1,r);
	tmax[id]=max(tmax[2*id],tmax[2*id+1]);
}
void makein(ll id,ll l,ll r){
	if(l==r){tmin[id]=a[l];return;}
	ll m=l+r>>1;
	makein(2*id,l,m);makein(2*id+1,m+1,r);
	tmin[id]=min(tmin[2*id],tmin[2*id+1]);
}
ll getax(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return -fuck;}
	if(u<=l&&v>=r){return tmax[id];}
	ll m=l+r>>1;
	return max(getax(2*id,l,m,u,v),getax(2*id+1,m+1,r,u,v));
}
ll getin(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return fuck;}
	if(u<=l&&v>=r){return tmin[id];}
	ll m=l+r>>1;
	return min(getin(2*id,l,m,u,v),getin(2*id+1,m+1,r,u,v));
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	makeax(1,1,n);makein(1,1,n);
	while(q--){
		cin>>u>>v;
		cout<<getax(1,1,n,u,v)-getin(1,1,n,u,v)<<"\n";
	}
}
