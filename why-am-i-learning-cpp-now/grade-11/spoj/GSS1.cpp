#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
#define tname "gss1"
#define ll long long 
const ll maxn=50000,inff=-(1ll<<62);
ll n,m,x,y,a[maxn+5];
struct node{ll sum,pre,suf,mx;};
struct seg{
	node t[maxn*4+5];
	node cum(const node &l,const node &r){
		return{
			.sum=l.sum + r.sum,
			.pre=max(l.pre, l.sum + r.pre),
			.suf=max(r.suf, r.sum + l.suf),
			.mx=max({l.mx, r.mx, l.suf + r.pre})
		};
	}
	void make(const ll &id=1,const ll &l=1,const ll &r=n){
		if(l==r){t[id]={a[l],a[l],a[l],a[l]};return;}
		ll m=(l+r)>>1;
		make(id<<1,l,m);
		make(id<<1|1,m+1,r);
		t[id]=cum(t[id<<1],t[id<<1|1]);
	}
	node quer(const ll &u,const ll &v,const ll &id=1,const ll &l=1,const ll &r=n){
		if(u>r||v<l){return{inff,inff,inff,inff};}
		if(u<=l&&v>=r){return t[id];}
		ll m=(l+r)>>1;
		node	L=quer(u,v,id<<1,l,m),
				R=quer(u,v,id<<1|1,m+1,r);
		if(L.mx==inff){return R;}
		if(R.mx==inff){return L;}
		return cum(L,R);
	}
}vl;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	if(n<1){return 0;}
	for(ll i=1;i<=n;i++){cin>>a[i];}
	cin>>m;
	vl.make();
	while(m--){
		cin>>x>>y;
		if(x>y){swap(x,y);}
		if(y-x+1==0){continue;}
		cout<<vl.quer(x,y).mx<<"\n";
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
