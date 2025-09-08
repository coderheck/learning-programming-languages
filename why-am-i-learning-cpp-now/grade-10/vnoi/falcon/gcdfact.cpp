#include <stdio.h>
#define ll long long 
#define cin fastscan
#define cout fastprint
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
	fast_putchar('\n');
}
inline void fastprint(const char* s,size_t len){ // ultrafast printf for strings
	fwrite(s,1,len,stdout);
}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll gcd(const ll& a,const ll& b){return(!b)?a:gcd(b,a%b);}
ll t,n,a,mi,gc;
int main(){
	cin(t);
	while(t--){
		cin(n);cin(a);mi=gc=a,n--;
		while(n--){cin(a);mi=min(mi,a),gc=gcd(gc,a);}
		cout((gc==mi?"YES\n":"NO\n"),3+(gc==mi));
	}
	fast_putchar(EOF);
}
