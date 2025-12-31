#include <iostream>
using namespace std;
#define ll long long
#define tname "prime1"
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=1000005,maxP=31622; // >=sqrt(10^9)
bool pr[maxP+5],pp[maxN];
ll prs[maxP+5],prc=0;
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i<=maxP;i++){
		if(!pr[i]){
			prs[prc++]=i;
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
void segsieve(const ll &l,const ll &r){
	ll len=r-l+1;
	for(ll i=0;i<len;i++){pp[i]=true;}
	for(ll i=0;i<prc;i++){
		ll p=prs[i];if(p*p>r){break;}
		for(ll j=max(p*p,(l+p-1)/p*p);j<=r;j+=p){
			pp[j-l]=false;
		}
	}
	if(l==1){pp[0]=false;}
	for(ll i=0;i<len;i++){if(pp[i]){cout<<i+l<<"\n";}}
	cout<<"\n";
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".inp","r",stdin);
	}
	cin.tie(0)->sync_with_stdio(0);
	prSieve();
	ll T,a,b;
	cin>>T;
	while(T--){
		cin>>a>>b;
		segsieve(a,b);
	}
}
