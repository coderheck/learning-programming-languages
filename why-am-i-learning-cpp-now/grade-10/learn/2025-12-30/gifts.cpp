#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long 
#define tname "gifts"
const ll maxN=200005;
ll n,d,a[maxN],res=0;
void sub1(){
	ll res=0;
	for(ll i=1;i<=n;i++){
		for(ll j=i+1;j<=n;j++){
			for(ll k=j+1;k<=n;k++){
				if(i<j&&j<k){
					res+=max({a[i],a[j],a[k]})-min({a[i],a[j],a[k]})<=d;
				}
			}
		}
	}
	cout<<res;
}
void suball(){
	sort(a+1,a+n+1);
	for(ll i=1;i<=n-3;i++){
		for(ll j=i+1;j<=n-2;j++){
			ll l=min(a[i],a[j]),u=max(a[i],a[j]);
			if(u-l>d){continue;}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>d;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	sub1();
	// suball();
}
