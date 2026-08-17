#include <iostream>
using namespace std;
#define tname "clocks"
#define ll long long 
const ll maxN=200005;
ll n,m,q,t[maxN];
struct aa{ll a,b;}a[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i].a>>a[i].b;}
	cin>>q;
	while(q--){
		ll res=0;
		cin>>t[q];
		for(ll i=1;i<=n;i++){
			res+=a[i].a/m;
			ll	rem=a[i].a%m,
				dist=(t[q]-a[i].b+m)%m;
			if(dist<rem){res++;}
		}
		cout<<res<<"\n";
	}
}
