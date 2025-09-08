#include <stdio.h>
#include <algorithm>
#define ll long long
inline int fast_getchar() {
	static char buf[1<<16];
	static size_t i=0,sz=0;
	if(i>=sz){
		sz=fread(buf,1,sizeof(buf),stdin);i=0;
		if(!sz){return -1;}
	}
	return buf[i++];
}
inline void fast_putchar(char c) {
	static char buf[1<<16];
	static size_t i=0;
	if(c==-1||i>=sizeof(buf)){
		fwrite(buf,1,i,stdout);i=0;
	}
	if(c!=-1){buf[i++]=c;}
}
inline void fastscan(ll &x){ // ultrafast scanf!!!!
	char c;bool n=false;x=0;
	c=fast_getchar();
	while(c!='-'&&(c<'0'||c>'9')){c=fast_getchar();}
	if(c=='-'){n=true;c=fast_getchar();}
	for(;c>='0'&&c<='9';c=fast_getchar()){x=x*10+(c-'0');}
	if(n){x=-x;}
}
inline void fastprint(ll x) { // ultrafast printf!!!!!!
	if(x<0){fast_putchar('-');x=-x;}
	char buf[21];int i=0;
	do{buf[i++]=char(x%10+'0');x/=10;}while(x);
	while(i--){fast_putchar(buf[i]);}
	fast_putchar(-1); // EOF is defined as -1, see stdio.h
}
struct p{ll l,r;}a[2000005];
bool cmpfn(const p& a,const p& b){return a.l!=b.l?a.l<b.l:a.r>b.r;}
bool gr(const ll& a,const ll& b){return(a>b);}
ll n,ans[2000005],res=0,cnt=0;
int main(){
	fastscan(n);
	for(ll i=0;i<n;i++){
		fastscan(a[i].l);fastscan(a[i].r);
		cnt+=(i&&a[i].l==a[i-1].l);
	}
	if(cnt==n-1){fastprint(n);return 0;}
	std::sort(a,a+n,cmpfn);
	for(ll i=0;i<n;i++){
		ll it=std::lower_bound(ans,ans+res,a[i].r,gr)-ans;
		ans[it]=a[i].r;res+=(it==res);
	}
	fastprint(res);
}
