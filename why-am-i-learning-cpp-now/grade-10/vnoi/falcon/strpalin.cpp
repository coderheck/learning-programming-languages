// I LOVE YOU SO MUCH STRINGS AUHUAGAHUGAHHU IMBATUKAMMMMM AHHHHHHHH
#include"stdio.h"
#include"string.h"
#define ull unsigned long long
#define ll long long 
bool issp(int& c){return(c==' '||c=='\f'||c=='\n'||c=='\r'||c=='\t'||c=='\v');}
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
  if(!i&&c==EOF){fast_putchar(EOF);}
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
const ull MOD=1000000007;
const int maxN=100000;
const int p=101;
struct Q{ll L,R;}a[maxN+1];
ll q,n;char s[maxN+1];
ull pref[maxN+5],suff[maxN+5],pows[maxN+5];
ull fastpowmod(ull a,ull b){
  ull res=1;a%=MOD;
  if(a==0){return 0;}
  while(b>0){
    if(b&1){res=(res*a)%MOD;}
    b>>=1;a=(a*a)%MOD;
  }
  return res;
}
ull modMulInv(ull n){return fastpowmod(n,MOD-2);}
void prefixHash(){
  pref[0] = 0;
  pref[1] = s[0];
  for(int i=2;i<=n;i++)
    pref[i] = (
      pref[i-1]%MOD + (s[i-1]%MOD * pows[i-1]%MOD) % MOD
    ) % MOD;
}
void suffixHash(){
  suff[0] = 0;
  suff[1] = s[n - 1];
  for (int i=n-2,j=2;i>=0&&j<=n;i--,j++)
    suff[j] = (
      suff[j-1]%MOD + (s[i]%MOD * pows[j-1]%MOD)%MOD
    ) % MOD;
}
void computepows(){
  pows[0]=1;
  for (int i=1;i<=n;i++)
    pows[i]=(pows[i-1]%MOD*p%MOD)%MOD;
}
void parse(){
  for(int i=0;i<q;i++){
    int l=a[i].L-1,r=a[i].R-1;
    ull forwardHash = (
      (pref[r+1]-pref[l]+MOD) % MOD * modMulInv(pows[l]) % MOD
    ) % MOD;
    ull backwardsHash = (
      (suff[n-l]-suff[n-r-1]+MOD) % MOD * modMulInv(pows[n-r-1]) % MOD
    ) % MOD;
    fastprint(
      (forwardHash==backwardsHash?"1\n":"-1\n"),
      2+(forwardHash!=backwardsHash)
    );
  }
}
int main(){
  // scanf("%[^\n]s",s);
  fastscan(s,sizeof(s));fastscan(q);
  for(int i=0;i<q;i++){
    fastscan(a[i].L);fastscan(a[i].R);
  }
  n=strlen(s);
  computepows();prefixHash();suffixHash();
  parse();
}

/*
abccbabccdcdcd
5 1 6 5 7 8 12 4 9 10 14
YES
YES
NO
NO
YES
*/

