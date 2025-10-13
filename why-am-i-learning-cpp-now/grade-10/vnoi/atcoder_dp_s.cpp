#include <stdio.h>
#include <string.h>
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
inline void fastscan(int& x){ // ultrafast scanf!!!!
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
const ll modN=1000000007;
int d,dp[10005][2][105];
char k[10005];
// int ds[10005],dz=0;
// ll sol(ll pos,ll sml,ll sum){
// 	if(pos==dz){return!(sum%d);}
// 	if(dp[pos][sml][sum]!=-1){return dp[pos][sml][sum];}
// 	ll lim=sml?ds[pos]:9,res=0;
// 	for(ll dig=0;dig<=lim;dig++){
// 		res=(res+sol(pos+1,sml&&dig==lim,(sum+dig)%d))%modN;
// 	}
// 	return dp[pos][sml][sum]=res%modN;
// }
// ll f(char x[]){
// 	dz=0;
// 	for(ll i=0;i<strlen(x);i++){ds[dz++]=k[i]-'0';}
// 	for(ll i=0;i<10005;i++){
// 		for(ll j=0;j<2;j++){
// 			for(ll k=0;k<105;k++){dp[i][j][k]=-1;}
// 		}
// 	}
// 	return sol(0,1,0);
// }
int main(){
	dp[0][0][0]=1;
	fastscan(k,10005);fastscan(d);
	int n=strlen(k);
	for(int pos=0;pos<n;pos++){
		for(int sml=0;sml<=1;sml++){
			for(int sum=0;sum<d;sum++){
				if(!dp[pos][sml][sum]){continue;}
				int lim=sml?9:k[pos]-'0';
				for(ll dig=0;dig<=lim;dig++){
					int nsm=sml||dig<lim,nsu=(sum+dig)%d;
					dp[pos+1][nsm][nsu]=(dp[pos+1][nsm][nsu]+dp[pos][sml][sum])%modN;
				}
			}
		}
	}
	fastprint((dp[n][0][0]+dp[n][1][0]-1+modN)%modN); // f(k) - f("0")
}
