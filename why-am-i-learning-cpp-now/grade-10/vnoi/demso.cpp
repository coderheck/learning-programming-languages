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
ll abss(ll x){return(x<0)?x*-1:x;}
void rvArr(ll a[],ll sz){for(ll i=0;i<sz/2;i++){ll m=a[i];a[i]=a[sz-i-1],a[sz-i-1]=m;}}
ll a,b,d,k,dp[16][2][10][16],ds[16],dz=0;
ll sol(ll pos,ll sml,ll lst,ll amt,ll stt){
	if(pos==dz){return amt<=k;}
	if(dp[pos][sml][lst][amt]!=-1&&stt){return dp[pos][sml][lst][amt];}
	ll lim=sml?ds[pos]:9,res=0;
	for(ll dig=0;dig<=lim;dig++){
		ll nmt=amt+(abss(lst-dig)<=d&&stt);
		if(nmt>k){continue;}
		res+=sol(pos+1,sml&&dig==lim,dig,nmt,stt||dig);
	}
	if(stt){dp[pos][sml][lst][amt]=res;}
	return res;
}
ll f(ll x){
	if(x<0){return 0;}
	if(!x){return 1;}
	dz=0;
	while(x){ds[dz++]=x%10;x/=10;}
	rvArr(ds,dz);
	for(ll i=0;i<16;i++){for(ll j=0;j<2;j++){for(ll k=0;k<10;k++){for(ll l=0;l<16;l++){dp[i][j][k][l]=-1;}}}}
	return sol(0,1,0,0,0);
}
int main(){
	fastscan(a);fastscan(b);fastscan(d);fastscan(k);
	fastprint(f(b)-f(a-1));
}

