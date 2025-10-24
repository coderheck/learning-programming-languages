#include <iostream>
using namespace std;
#define ll long long 
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=1<<20;
const ll inf=1000000000007;
ll n,M[maxN+5],dp[maxN+5],S[maxN+5],sobit1[maxN+5];
ll cost(ll y,ll p){
	ll k=sobit1[y],s=S[y],tb=s/k,r=s%k,mp=M[p-1];

	if(mp==tb) return 0;
	if(mp<tb) return tb-mp;
	if(r==0) return mp-tb;
	if(mp==tb+1) return 0;
	if(mp>tb+1) return mp-(tb+1);
	//
	// if(tb<mp){
	// 	if(r==0){return mp-tb;}
	// 	else if(r>0){return mp-(tb+1);}
	// }else{
	// 	return tb-mp;
	// }
	// ll tb=S[y]/sobit1[y];
	// if(tb<M[p-1]){
	// 	if(S[y]%sobit1[y]==0){return M[p-1]-tb;}
	// 	else return M[p-1]-(tb+1);
	// }
	// return tb-M[p];
}
void preproc(){
	for(ll x=0;x<(1<<n);x++){
		S[x]=0,sobit1[x]=0;
		ll y=x,cs=0;
		while(y){
			ll bit=(y&1);
			S[x]+=bit*M[cs],sobit1[x]+=bit;
			cs++,y>>=1;
		}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=0;i<n;i++){cin>>M[i];}
	
	// preproc
	dp[0]=0;
	for(ll x=1;x<(1<<n);x++){dp[x]=inf;}
	// for(ll mask=1;mask<(1<<n);mask++){
	// 	sobit1[mask]=dembit1(mask);
	// 	ll sum=0;
	// 	for(ll i=0;i<n;i++){if(mask&(1<<i)){sum+=M[i];}}
	// 	S[mask]=sum,dp[mask]=inf;
	// }
	//
	preproc();

	// bitmask
	for(ll x=0;x<(1<<n);x++){
		for(ll p=1;p<=n;p++){
			if( (x & (1 << (p - 1))) == 0 ){
				ll y=x|(1<<(p-1));
				dp[y]=min(dp[y],dp[x]+cost(y,p));
			}
		}
	}
	
	cout<<dp[(1<<n)-1];
}
