#include <stdio.h>
#include <string.h>
#define ll long long 
#define issp(c) (c==' '||c=='\f'||c=='\n'||c=='\r'||c=='\t'||c=='\v')
// bool issp(int& c){return(c==' '||c=='\f'||c=='\n'||c=='\r'||c=='\t'||c=='\v');}
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
const ll maxN=100000;
const ll modN=1000000007;
const ll P=31;
ll k,n,l,r,p[maxN+5],fw[maxN+5],bk[maxN+5];
char s[maxN+5];
bool cmpHashes(const ll& l,const ll& r){
	return ((fw[r]-fw[l-1]*p[r-l+1]%modN+modN)%modN)
			 ==((bk[l]-bk[r+1]*p[r-l+1]%modN+modN)%modN);
}
int main(){
	// cin.tie(nullptr)->sync_with_stdio(0);
	fastscan(s,maxN);fastscan(k);
	n=strlen(s);
	p[0]=1,fw[0]=bk[n]=0;
	for(ll i=1;i<=n;i++){p[i]=(p[i-1]*P)%modN;}
	for(ll i=1;i<=n;i++){fw[i]=(fw[i-1]*P+s[i-1]-'a')%modN;}
	for(ll i=n;i>=1;i--){bk[i]=(bk[i+1]*P+s[i-1]-'a')%modN;}
	while(k--){
		fastscan(l);fastscan(r);
		bool lol=cmpHashes(l,r);
		fastprint(lol?"1\n":"-1\n",3-lol);
	}
}
