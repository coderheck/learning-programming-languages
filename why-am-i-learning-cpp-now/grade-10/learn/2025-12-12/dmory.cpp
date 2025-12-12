#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long
#define tname "dmory"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005,inff=10000000007;
ll n,k,a[maxN],res=0,stmax[maxN*4+5],stmin[maxN*4+5];
void makemin(ll id,ll l,ll r){
	if(l==r){stmin[id]=a[l];return;}
	ll m=(l+r)>>1;
	makemin(id<<1,l,m);makemin(id<<1|1,m+1,r);
	stmin[id]=min(stmin[id<<1],stmin[id<<1|1]);
}
void makemax(ll id,ll l,ll r){
	if(l==r){stmax[id]=a[l];return;}
	ll m=(l+r)>>1;
	makemax(id<<1,l,m);makemax(id<<1|1,m+1,r);
	stmax[id]=max(stmax[id<<1],stmax[id<<1|1]);
}
ll getmin(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return inff;}
	if(u<=l&&v>=r){return stmin[id];}
	ll m=(l+r)>>1;
	return min(getmin(id<<1,l,m,u,v),getmin(id<<1|1,m+1,r,u,v));
}
ll getmax(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return -inff;}
	if(u<=l&&v>=r){return stmax[id];}
	ll m=(l+r)>>1;
	return max(getmax(id<<1,l,m,u,v),getmax(id<<1|1,m+1,r,u,v));
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	makemin(1,1,n);makemax(1,1,n);
	for(ll i=1;i<=n;i++){
		for(ll j=i;j<=n;j++){
			ll ma=getmax(1,1,n,i,j),mi=getmin(1,1,n,i,j);
			res+=(abs(ma-mi)<=k);
		}
	}
	cout<<res;
}
