// math gay
#include <stdio.h>
#define ll long long
#define tname "smartlight"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define debug(x) cout<<"debug: "<<(x)<<"\n";
#define issp(c) (c==' '||c=='\f'||c=='\n'||c=='\r'||c=='\t'||c=='\v')
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
inline void fastscan(char *str,ll lim){
  int c=fast_getchar();
  while(c!=EOF&&issp(c)){c=fast_getchar();}
  int i=0;
  while(c!=EOF&&!issp(c)&&i<lim-1){str[i++]=(char)c;c=fast_getchar();}
  str[i]='\0';
  // if(!i&&c==EOF){fast_putchar(EOF);}
}
inline void fastprint(ll x) { // ultrafast printf!!!!!!
  if(x<0){fast_putchar('-');x=-x;}
  char buf[21];int i=0;
  do{buf[i++]=char(x%10+'0');x/=10;}while(x);
  while(i--){fast_putchar(buf[i]);}
  fast_putchar(EOF);
}
inline void fastprint(const char* s,size_t len){ // ultrafast printf for strings
  fwrite(s,1,len,stdout);
}
const int maxP=44722,seg=65536; // sqrt(2*10^9) <= 44722
int prs[maxP+5],prc=0;
bool mark[seg];
void prSieve(){
	bool pr[maxP+5];
	pr[0]=pr[1]=true;
	for(ll i=3;i<=maxP;i+=2){
		if(!pr[i]){
			prs[prc++]=i;
			if(1LL*i*i<=maxP){
				for(int j=i*i;j<=maxP;j+=i<<1){pr[j]=true;}
			}
		}
	}
}
void sexy(ll l,ll r){
	if(r<2){fastprint("0\n",2);return;}
	l=(l<2)?2:l;
	ll res=(l<=2&&r>=2);
	l+=!(l&1);
	for(int base=l;base<=r;base+=seg<<1){
		ll upper=min(r,base+((1LL*seg)<<1)-1);
		int len=((upper-base)>>1)+1;
		for(int i=0;i<len;i++){mark[i]=false;}
		for(int i=0;i<prc;i++){
			int p=prs[i],p2=1LL*p*p;
			if(p2>upper){break;}
			ll st=max(p2,((base+p-1)/p)*p);
			if(!(st&1)){st+=p;}
			for(ll x=st;x<=upper;x+=p<<1){
				mark[(x-base)>>1]=true;
			}
		}
		for(ll i=0;i<len;i++){if(!mark[i]){res++;}}
	}
	fastprint(res);fastprint("\n",1);
}
ll t,l,r;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	prSieve();
	fastscan(t);
	while(t--){
		fastscan(l);fastscan(r);
		sexy(l,r);
	}
}
