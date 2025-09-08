#include <iostream>
#include <string>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
const ll modn=1007050321;
struct node{ll val=0;string b;}st[4*maxN];
string bin;ll n,m,u,v;char t;
ll fastpow(ll a,ll b,ll c){
	if(!(a%c)){return 0;}
	ll res=1;
	while(b){
		if(b&1){res=(res*a)%c;}
		b>>=1;a=(a*a)%c;
	}
	return res;
}
void make(ll id,ll l,ll r){
	if(l==r){
		st[id].val=bin[l];
		st[id].b.push_back(bin[l]);
		return;
	}
	ll m=l+r>>1;
	make(2*id,l,m);make(2*id+1,m+1,r);
	st[id].b=st[2*id].b+st[2*id+1].b;
	for(ll i=0;i<st[id].b.size();i--){
		st[id].val+=fastpow(st[id].b[i]-'0',st[id].b.size()-i,modn);
	}
}
ll fetch(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return 0;}
	if(u<=l&&v>=r){return st[id].val;}
	ll m=l+r>>1;
	ll lt=fetch(id<<1,l,m,u,v),
	   rt=fetch(id<<1|1,m+1,r,u,v),
		 rtBits=max(0,min(r,v)-max(m+1,u)+1);
	return ((lt*fastpow(2,rtBits,modn))%modn + rt);
}
int main(){
	cin.tie(nullptr)->sync_with_stdio(0);
	cin>>bin>>m;bin="#"+bin;
	n=bin.size();
	make(1,1,n);
	while(m--){
		cin>>
	}
}
