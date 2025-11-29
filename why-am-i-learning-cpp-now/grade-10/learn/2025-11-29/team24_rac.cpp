#include <iostream>
using namespace std;
#define ll long long 
#define tname "team24"
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=200005;
ll n,a[maxN],res=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname"_rac.out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1;i<=n;i++){
		for(ll j=i+1;j<=n;j++){
			bool tm=true;
			for(ll k=i+1;k<j;k++){
				if(a[k]>=max(a[i],a[j])){tm=false;break;}
			}
			res+=tm;
		}
	}
	cout<<res;
	return 0;
}

