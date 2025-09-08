#include <stdio.h>
#define ll long long 
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
	fast_putchar('\n');fast_putchar(EOF);
}
inline void fastprint(const char* s,size_t len){ // ultrafast printf for strings
	fwrite(s,1,len,stdout);
}
#define cin fastscan
#define cout fastprint
const ll modN=1000000007;
const ll maxN=1000005;
ll f[maxN+5],ff[maxN+5];
ll fastpow(ll a,ll b){
	if(!(a%modN)){return 0;}
	ll res=1;a%=modN;
	while(b){
		if(b&1){res=(res*a)%modN;}
		a=(a*a)%modN;b>>=1;
	}
	return res;
}
void preproc(){
	f[0]=1;
	for(ll i=1;i<=maxN;i++){
		f[i]=f[i-1]*i%modN;
	}
	ff[maxN]=fastpow(f[maxN],modN-2);
	for(ll i=maxN-1;i>=0;i--){
		ff[i]=ff[i+1]*(i+1)%modN;
	}
}
ll c(const ll& n,const ll& k){
	return (k>n||k<0) ? 0 : ((f[n]*ff[k]%modN)*ff[n-k]%modN);
}
ll n,k,t;
int main(){
	preproc();
	cin(t);
	while(t--){
		cin(n);cin(k);
		cout(c(n,k));
	}
}

