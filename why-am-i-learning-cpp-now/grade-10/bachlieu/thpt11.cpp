#include <iostream>
using namespace std;
#define ll long long
#define maxP 1000000
bool pr[maxP+5];
void prSieve(){
	pr[0]=pr[1]=true;
	for(ll i=2;i*i<=maxP;i++){
		if(!pr[i]){
			for(ll j=i*i;j<=maxP;j+=i){pr[j]=true;}
		}
	}
}
ll tcs(ll n){
	ll r=0;
	while(n!=0){r+=n%10;n/=10;}
	return r;
}
ll n,m,k,res=0;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	prSieve();
	cin>>m>>n>>k;
	for(ll i=m;i<=n;i++){res+=(!pr[i]&&!(tcs(i)%k));}
	cout<<res;
}
