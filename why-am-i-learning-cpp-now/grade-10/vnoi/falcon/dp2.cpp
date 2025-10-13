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
void rvArr(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll a,b,D,k,dp[16][2][21][2],ds[16],dz=0;
ll sol(ll pos,ll sml,ll amt,ll z){
	if(pos==dz){return(amt==k);}
	if(dp[pos][sml][amt][z]!=-1){return dp[pos][sml][amt][z];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll d=0;d<=lim;d++){
		ll nz=z&&(!d),tm=amt+(!nz&&d==D);
		if(tm>k){continue;}
		res+=sol(pos+1,sml&&(d==lim),tm,nz);
	}
	return dp[pos][sml][amt][z]=res;
}
ll f(ll x){
	if(x<0){return 0;}
	if(!x){return(k==(!D));}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	rvArr(ds,dz);
	memset(dp,-1,sizeof(dp));
	return sol(0,1,0,1);
}
int main(){
	fastscan(a);fastscan(b);fastscan(D);fastscan(k);
	fastprint(f(b)-f(a-1));
}

