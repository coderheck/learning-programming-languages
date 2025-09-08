// code ultra super supreme legendary tà đạo

// #include <stdio.h>
#include <stddef.h>
#include <stdio.h>
#define ll long long 
// #define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=200005;
template<typename _>
inline _ max(_ a,_ b){return(a>b)?a:b;}
// ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll n,q,t,u,v,a[maxN],st[maxN];

inline int fast_getchar() {
	static char buf[1<<16];static size_t i=0,sz=0;
	if(i>=sz){
		sz=fread(buf,1,sizeof(buf),stdin);i=0;
		if(!sz){return EOF;}
	}
	return buf[i++];
}
inline void fast_putchar(char c) {
	static char buf[1<<16];static size_t i=0;
	if(c==EOF||i>=sizeof(buf)){
		fwrite(buf,1,i,stdout);i=0;
	}
	if(c!=EOF){buf[i++]=c;}
}

#define getchar_unlocked fast_getchar
#define putchar_unlocked fast_putchar

// ultrafast scanf!!!! 
inline void fastscan(ll &x){
	char c;bool n=false;x=0;
	c=getchar_unlocked();
	while(c!='-'&&(c<'0'||c>'9')){c=getchar_unlocked();}
	if(c=='-'){n=true;c=getchar_unlocked();}
	for(;c>='0'&&c<='9';c=getchar_unlocked()){x=x*10+(c-'0');}
	if(n){x=-x;}
}

// ultrafast printf!!!!!!
inline void fastprint(ll x) {
	if(x<0){putchar_unlocked('-');x=-x;}
	char buf[21];int i=0;
	do{buf[i++]=char(x%10+'0');x/=10;}while(x);
	while(i--){putchar_unlocked(buf[i]);}
	putchar_unlocked('\n');
}

// sub 1
//
// inline void make(ll id,ll l,ll r){
// 	if(l==r){st[id]=a[l];return;}
// 	ll m=l+r>>1;
// 	make(id<<1,l,m);make(id<<1|1,m+1,r);
// 	st[id]=max(st[id<<1],st[id<<1|1]);
// }
// inline void upd(ll id,ll l,ll r,ll i,ll val){
// 	if(i<l||i>r){return;}
// 	if(l==r){st[id]=val;return;}
// 	ll m=l+r>>1;
// 	if(i<=m){
// 		upd(id<<1,l,m,i,val);
// 	}else{
// 		upd(id<<1|1,m+1,r,i,val);
// 	}
// 	st[id]=max(st[id<<1],st[id<<1|1]);
// }
// inline ll fch(ll id,ll l,ll r,ll u,ll v){
// 	if(u>r||v<l){return fuck;}
// 	if(u<=l&&v>=r){return st[id];}
// 	ll m=l+r>>1;
// 	return max(fch(id<<1,l,m,u,v),fch(id<<1|1,m+1,r,u,v));
// }

// good

inline void make(){
	for(ll id=0;id<n;id++){st[id+n]=a[id];}
	for(ll id=n-1;id>0;id--){st[id]=max(st[id<<1],st[id<<1|1]);}
}
inline void upd(ll i,ll val){
	for(st[i+=n]=val;i>1;i>>=1){st[i>>1]=max(st[i],st[i^1]);}
}
inline ll fch(ll l,ll r){
	ll ret=-1000000007;
	for(l+=n,r+=n;l<r;l>>=1,r>>=1){
		if(l&1){ret=max(ret,st[l++]);}if(r&1){ret=max(ret,st[--r]);}
	}
	return ret;
}
int main(){
	/*scanf("%lld",&n);*/fastscan(n);
	for(ll i=0;i<n;i++){/*scanf("%lld",&a[i]);*/fastscan(a[i]);}
	/*scanf("%lld",&q);*/fastscan(q);
	make();
	while(q--){
		/*scanf("%lld%lld%lld",&t,&u,&v);*/fastscan(t);fastscan(u);fastscan(v);
		if(t&1){upd(u-1,v);}else{/*printf("%lld\n",fch(u-1,v));*/fastprint(fch(u-1,v));}
	}
	fast_putchar(EOF);
}

