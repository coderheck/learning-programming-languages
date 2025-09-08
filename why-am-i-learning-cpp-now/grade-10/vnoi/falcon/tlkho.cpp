#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=200005;
ll m,w,n,a,st[4*maxN];
ll max(const ll& a,const ll& b){return(a>b)?a:b;} 
void make(ll id,ll l,ll r){
	if(l==r){st[id]=w;return;}
	ll m=l+r>>1;
	make(2*id,l,m);
	make(2*id+1,m+1,r);
	st[id]=max(st[2*id],st[2*id+1]);
}
void upd(ll id,ll l,ll r,ll i,ll val){
	if(l==r){st[id]-=val;return;}
	ll m=l+r>>1;
	if(i<=m){
		upd(2*id,l,m,i,val);
	}else{
		upd(2*id+1,m+1,r,i,val);
	}
	st[id]=max(st[2*id],st[2*id+1]);
}
ll quer(ll id,ll l,ll r,ll val){
	if(st[id]<val){return -1;}
	if(l==r){return l;}
	ll m=l+r>>1;
	if(st[2*id]>=val){
		return quer(2*id,l,m,val);
	}else{
		return quer(2*id+1,m+1,r,val);
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>w>>n;
	make(1,1,m);
	for(ll i=1;i<=n;i++){
		cin>>a;
		ll pos=quer(1,1,m,a);
		if(pos==-1){
			cout<<"-1\n";
		}else{
			cout<<pos<<"\n";
			upd(1,1,m,pos,a);
		}
	}
}
