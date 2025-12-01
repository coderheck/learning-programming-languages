#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
#define ll long long 
#define tname "order24"
#define debug(a) cout<<"debug"<<(a)<<"\n";
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005,inff=100000000007;
ll n,k,a[maxN],b[maxN];
bool ss=true;
void mywife(){for(ll i=1;i<=n;i++){cout<<a[i]<<" ";}}
struct node{ll val,idx;}st[4*maxN+5];
void make(ll id,ll l,ll r){
	if(l==r){st[id]={a[l],l};return;}
	ll m=l+r>>1;
	make(id<<1,l,m);make(id<<1|1,m+1,r);
	if(st[id<<1].val<=st[id<<1|1].val){
		st[id]=st[id<<1];
	}else{
		st[id]=st[id<<1|1];
	}
}
void upd(ll id,ll l,ll r,ll i,ll val){
	if(i<l||i>r){return;}
	if(l==r){st[id]={val,i};}
	ll m=l+r>>1;
	upd(id<<1,l,m,i,val);
	upd(id<<1|1,m+1,r,i,val);
	if(st[id<<1].val<=st[id<<1|1].val){
		st[id]=st[id<<1];
	}else{
		st[id]=st[id<<1|1];
	}
}
node get(ll id,ll l,ll r,ll u,ll v){
	if(u>r||v<l){return{inff,-1};}
	if(u<=l&&v>=r){return st[id];}
	ll m=l+r>>1;
	node r1=get(id<<1,l,m,u,v),r2=get(id<<1|1,m+1,r,u,v);
	if(r1.val<=r2.val){return r1;}else{return r2;}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];b[i]=a[i];}
	sort(b+1,b+n+1);
	for(ll i=1;i<=n;i++){if(a[i]!=b[i]){ss=false;break;}}
	if(ss){ // thoát sớm: đã sort
		mywife();
		return 0;
	}
	if(n<=1000&&k==1){ // sub 1: gặp số a[i] > a[i+1] đầu tiên thì swap
		for(ll i=1;i+1<=n;i++){
			if(a[i]>a[i+1]){swap(a[i],a[i+1]);break;}
		}
		mywife();
		return 0;
	}
	make(1,1,n);
	for(ll i=1;i<=n&&k>0;i++){
		ll r=min(n,i+k);
		node minv=get(1,1,n,i,r);
		if(minv.idx==i){continue;}
		for(ll j=minv.idx;j>i;j--){
			swap(a[j],a[j-1]);
			upd(1,1,n,j,a[j]);
			upd(1,1,n,j-1,a[j-1]);
		}
		k-=minv.idx-i;
	}
	mywife();
}

