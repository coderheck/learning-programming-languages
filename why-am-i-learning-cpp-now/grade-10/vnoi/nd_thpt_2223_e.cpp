#include <stdio.h>
#include <cstdint>
#include <memory>
#include <chrono>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
#define tname "csbn"
#define ll long long
#define umap unordered_map
/* #define lout(x) \
     cout<<x<<"\n"; \
     cerr<<x<<"\n"; */
#define lout(x) fastprint((x))
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
// uint64_t rdseed=(uint64_t)(make_unique<char>().get());
// struct hashfn{uint64_t operator()(uint64_t x)const{return rdseed;}};
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    // rdseed^=(uint64_t)(chrono::high_resolution_clock::now().time_since_epoch().count());
    __gnu_pbds::gp_hash_table<ll,ll/*,hashfn*/>cnt;
    fastscan(n);
    for(ll i=1,a;i<=n;i++){
        fastscan(a);
        res+=cnt[a];
        cnt[a]++;
    }
    fastprint(res);
}
