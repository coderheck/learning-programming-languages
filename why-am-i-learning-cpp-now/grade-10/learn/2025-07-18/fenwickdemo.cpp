#include <iostream>
using namespace std;
#define ll long long 
const ll maxn=200000;
ll n,q,t,x,v,a[maxn+5],tt[maxn+5];
void upd(ll i,ll delta){
	for(;i<=n;i+=i&-i){tt[i]+=delta;}
}
ll query(ll i){
	ll t=0;
	for(;i>=1;i-=i&-i){t+=tt[i];}
	return t;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){cin>>a[i];upd(i,a[i]);}
	while(q--){
		cin>>t;
		if(t&1){
			cin>>x>>v;
			upd(x,v-a[x]);
			a[x]=v;
		}else{
			cin>>x;
			cout<<query(x)<<"\n";
		}
	}
}
