/* brutal seg */
#include<stdio.h>
#define ll long long
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=1000005;
// ll logTwo(const ll& x){
// 	ll r=0,x1=x;
// 	while(x1>>=1){r++;}
// 	return r;
// }
const int tab64[64] = {
    63,  0, 58,  1, 59, 47, 53,  2,
    60, 39, 48, 27, 54, 33, 42,  3,
    61, 51, 37, 40, 49, 18, 28, 20,
    55, 30, 34, 11, 43, 14, 22,  4,
    62, 57, 46, 52, 38, 26, 32, 41,
    50, 36, 17, 19, 29, 10, 13, 21,
    56, 45, 25, 31, 35, 16,  9, 12,
    44, 24, 15,  8, 23,  7,  6,  5
};
ll logTwo(ll value){
    value |= value >> 1;
    value |= value >> 2;
    value |= value >> 4;
    value |= value >> 8;
    value |= value >> 16;
    value |= value >> 32;
    return tab64[((ll)((value - (value >> 1))*0x07EDD5E59A4E28C2)) >> 58];
}
ll n,m,l,r,s,t=1,a[maxN],lz[maxN],firstTime[maxN],st[4*maxN];
void init(){
	for(ll i=0;i<n;i++){st[i+n]=a[i+1];}
	for(ll i=n-1;i>0;i--){
		st[i]=min(st[i<<1],st[i<<1|1]);  // (i << 1 | 1) == (i/2 + 1)
	}
}
void apply(ll p,ll val){st[p]-=val;if(p<n){lz[p]+=val;}}
void push(ll p){
	for(ll h=logTwo(n);h>0;h--){
		ll i=p>>h;
		if(lz[i]){
			apply(i<<1,lz[i]);
			apply(i<<1|1,lz[i]);
			lz[i]=0;
		}
	}
}
void pull(ll p){
	while(p>1){
		p>>=1;
		st[p]=min(st[p<<1],st[p<<1|1])-lz[p];
	}
}
void upd(ll l,ll r,ll val){
	l+=n;r+=n+1;
	ll u=l,v=r;
	push(u);push(v-1);
	while(l<r){
		if(l&1){apply(l++,val);}
		if(r&1){apply(--r,val);}
		l>>=1;r>>=1;
	}
	pull(u);pull(v-1);
}
ll quer(ll p){p+=n;push(p);return st[p];}
int main(){
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++){scanf("%lld",&a[i]);firstTime[i]=-1;}
	init();
	while(t<=m){
		scanf("%lld%lld%lld",&l,&r,&s);
		upd(l-1,r-1,s);
		for(ll i=l;i<=r;i++){
			if(firstTime[i]==-1&&quer(i-1)<=0){firstTime[i]=t;}
		}
		t++;
	}
	for(ll i=1;i<=n;i++){printf("%lld ",firstTime[i]);}
}

