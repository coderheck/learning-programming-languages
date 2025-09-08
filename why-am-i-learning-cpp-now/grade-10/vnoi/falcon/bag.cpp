// I LOVE stdio.h
#include <stdio.h>
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=1005;
ll n,m,res=0,w[maxN],v[maxN],f[maxN][maxN];
void make(){
	for(int j=0;j<=m;j++){f[0][j]=0;}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m;j++){
			f[i][j]=f[i-1][j];
			if( w[i]<=j && f[i][j] < f[i-1][j-w[i]]+v[i] ){
				f[i][j]=f[i-1][j-w[i]]+v[i];
			}
			res=max(res,f[i][j]);
		}
	}
}
void findStole(/*F[0..n][0..M]*/){
	// Bắt đầu từ ô F[n, M] trên dòng n: 
	ll i=n,j=m,st[maxN],stc=0;
	for(;i&&j;i--){
		if(f[i][j]!=f[i-1][j]){
			st[stc++]=i; // Món hàng thứ i được chọn
			j-=w[i];
		}
	}
	printf("%lld\n",stc);
	for(ll i=stc-1;i>=0;i--){printf("%lld\n",st[i]);}
}

int main(){
	scanf("%lld%lld",&n,&m);
	for(ll i=1;i<=n;i++){scanf("%lld%lld",&w[i],&v[i]);}
	make();
	printf("%lld ",res);
	findStole();
}
