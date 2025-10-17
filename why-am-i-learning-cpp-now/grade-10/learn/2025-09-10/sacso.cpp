#include <iostream>
#include <string>
using namespace std;
#define ll long long 
const ll maxN=100005;
ll n,q,l,r,st[4*maxN];string s,t;char c,laz[maxN];
void init(ll id,ll l,ll r){
	if(l==r){st[id]=1;return;}
	ll m=l+r>>1;
	init(id<<1,l,m);init(id<<1|1,m+1,r);
	if(s[m]==s[m+1]){
		st[id]=st[id<<1]+st[id<<1|1]-1;
	}else{
		st[id]=st[id<<1]+st[id<<1|1];
  }
}
void push(ll id,ll l,ll r){
	if(laz[id]){
		if(l==r){s[l]=laz[id];laz[id]=0;return;}
		laz[id<<1]=laz[id<<1|1]=;
		laz[id<<1]=laz[id<<1|1]=laz[id];
		laz[id]=0;
	}
}
ll fch(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return 0;}
	push(id,l,r);
	if(u<=l&&v>=r){return st[id];}
	ll m=l+r>>1;
	ll s1=fch(id<<1,l,m,u,v),s2=fch(id<<1|1,m+1,r,u,v);
	return(s1+s2-(s[m]==s[m+1]));
}
void upd(ll id,ll l,ll r,ll u,ll v,char x){
	if(u>r||v<l){return;}
	if(u<=l&&v>=r){
		st[id]=1;
		if(l==r){s[l]=x;}else{laz[id]=x;}
		laz[id]=x;
		return;
	}
	push(id,l,r);
	ll m=l+r>>1;
	upd(id<<1,l,m,u,v,x);upd(id<<1|1,m+1,r,u,v,x);
	if(s[m]!=s[m+1]){
		st[id]=st[id<<1]+st[id<<1|1]-1;
	}else{
		st[id]=st[id<<1]+st[id<<1|1];
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q>>s;
	s="#"+s+"#";
	while(q--){
		cin>>t>>l>>r;
		if(t[0]=='g'){
			cout<<fch(1,1,n,l,r)<<"\n";
		}else{
			cin>>c;
			upd(1,1,n,l,r,c);
		}
	}
}
