#include <iostream>
using namespace std;
#define ll long long 
const ll maxn=1000000;
bool happy(ll n){
	ll t=0,d;
	while(n){
		d=n%10;
		t+=d*d;
		n/=10;
	}
	return !(t&1);
}
ll a,b,cnt[maxn+5];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cnt[0]=1;
	for(ll i=1;i<=maxn;i++){cnt[i]=cnt[i-1]+happy(i);}
	cin>>a>>b;
	cout<<cnt[b]-cnt[a-1];
}
