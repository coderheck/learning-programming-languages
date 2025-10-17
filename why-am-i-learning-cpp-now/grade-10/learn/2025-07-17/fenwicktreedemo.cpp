#include <iostream>
using namespace std;
#define ll long long 
ll n,q,x,v,t,a[100005],bit[100005];
void upd(ll i,ll val){
	for(;i<=n;i+=i&-i){bit[i]+=val;}
}
ll get(ll i){
	ll s=0;
	for(;i>=1;i-=i&-i){s+=bit[i];}
	return s;
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
			cout<<get(x)<<"\n";
		}
	}
}
