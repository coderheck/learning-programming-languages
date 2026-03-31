#include <stdio.h>
#define tname "sodep"
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
inline void fastprint(ll x) { // ultrafast printf!!!!!!
    if(x<0){fast_putchar('-');x=-x;}
    char buf[21];int i=0;
    do{buf[i++]=char(x%10+'0');x/=10;}while(x);
    while(i--){fast_putchar(buf[i]);}
    fast_putchar(EOF);
}
ll n,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    fastscan(n);
    while(n){res+=n%10,n/=10;}
    fastprint(res%10==9);
}
