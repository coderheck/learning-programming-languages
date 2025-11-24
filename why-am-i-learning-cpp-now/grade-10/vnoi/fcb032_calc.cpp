#include <stdio.h>
#define ll long long 
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
ll a,b,c;char m;
int main(){
	fastscan(a),fastscan(b),fastscan(c);m=(!(a+b-c)||!(c+b-a)||!(a+c-b));
	fastprint(m?"yes\n":"no\n",3+m);
	fastscan(a),fastscan(b),fastscan(c);m=(!(a+b-c)||!(c+b-a)||!(a+c-b));
	fastprint(m?"yes":"no",2+m);
}

