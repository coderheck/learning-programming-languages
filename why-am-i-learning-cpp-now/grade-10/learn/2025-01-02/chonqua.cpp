#include <iostream>
using namespace std;
#define ll long long 
#define tname "chonqua"
const ll maxN=100005;
ll n,k,a[maxN];
bool sexy(const ll &len){
	for(ll l=1;l+len-1<=n;l++){
		ll r=l+len-1;
		if(a[r]-a[l-1]<=k){return true;}
	}
	return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];a[i]+=a[i-1];}
	ll l=1,r=n,m,res=1;
	while(l<=r){
		m=(l+r)>>1;
		if(sexy(m)){res=m,l=m+1;}else{r=m-1;}
	}
	cout<<res;
}
