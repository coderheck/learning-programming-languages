#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
#define ll long long 
#define tname "order24"
#define debug(a) cout<<"debug"<<(a)<<"\n";
const ll maxN=100005;
ll n,k,a[maxN],b[maxN];
bool ss=true;
void mywife(){for(ll i=1;i<=n;i++){cout<<a[i]<<" ";}}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	for(ll i=1;i<=n;i++){cin>>a[i];b[i]=a[i];}
	sort(b+1,b+n+1);
	for(ll i=1;i<=n;i++){if(a[i]!=b[i]){ss=false;break;}}
	if(n<=1000&&k==1){ // sub 1: gặp số a[i] > a[i+1] đầu tiên thì swap
		for(ll i=1;i+1<=n;i++){
			if(a[i]>a[i+1]){swap(a[i],a[i+1]);break;}
		}
		mywife();
		return 0;
	}
	if(ss){ // thoát sớm: đã sort
		mywife();
		return 0;
	}
}
