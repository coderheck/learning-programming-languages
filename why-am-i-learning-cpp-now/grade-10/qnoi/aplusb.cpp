#include <stdio.h>
#define issp(c) (c==' '||c=='\f'||c=='\n'||c=='\r'||c=='\t'||c=='\v')
inline int fast_getchar() {
  static char buf[1<<8];static signed i=0,sz=0;
  if(i>=sz){
    sz=fread(buf,1,sizeof(buf),stdin);i=0;
    if(!sz){return 0;}
  }
  return buf[i++];
}
inline void fast_putchar(char c) {
  static char buf[1<<8];static signed i=0;
  if(c==-1||i>=sizeof(buf)){
    fwrite(buf,1,i,stdout);i=0;
  }
  if(c!=-1){buf[i++]=c;}
}
inline void fastscan(signed &x){ // ultrafast scanf!!!!
  char c;bool n=false;x=0;
  c=fast_getchar();
  while(c!='-'&&(c<'0'||c>'9')){c=fast_getchar();}
  if(c=='-'){n=true;c=fast_getchar();}
  for(;c>='0'&&c<='9';c=fast_getchar()){x=x*10+(c-'0');}
  if(n){x=-x;}
}
inline void fastprint(signed x) { // ultrafast printf!!!!!!
  if(x<0){fast_putchar('-');x=-x;}
  char buf[10];int i=0;
  do{buf[i++]=char(x%10+'0');x/=10;}while(x);
  while(i--){fast_putchar(buf[i]);}
  fast_putchar(-1);
}
signed main(){
	signed a,b;
	fastscan(a);fastscan(b);
	fastprint(a+b);
}

