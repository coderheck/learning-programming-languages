#include <stdio.h>
#define tname "aodai"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
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
ll n,res=0,c3=0,c2=0,c1=0,c13;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    fastscan(n);
    for(ll i=1,a;i<=n;i++){
        fastscan(a);
        if(a==4){res++;}
        else if(a==3){c3++;}
        else if(a==2){c2++;}
        else{c1++;}
    }
    c13=min(c3,c1); // cặp 3 - 1
    res+=c13,c1-=c13,c3-=c13;
    res+=c3; // không thể ghép 3 - 2
    res+=c2>>1; // cặp 2 - 2
    c2%=2;
    if(c2){ // nhóm 2 - 1 - 1, 2 - 1
        res++,c1=max(0,c1-2);
    }
    if(c1){ // nhóm 1 - 1 - 1 - 1, 1 - 1 - 1, 1 - 1
        res+=(c1+3)/4;
    }
    fastprint(res);
}
