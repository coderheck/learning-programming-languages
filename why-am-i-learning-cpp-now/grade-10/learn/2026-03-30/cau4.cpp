#include <algorithm>
#include <iostream>
using namespace std;
#define ll long long 
#define tname "cau3"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
	cout<<x<<"\n"; \
	// cerr<<x<<"\n";
const ll maxN=705;
ll Q,n,a[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>Q;
	while(Q--){
		bool ok=false;
		cin>>n;
		for(ll i=1;i<=n;i++){cin>>a[i];a[i]*=a[i];}
		sort(a+1,a+n+1);
		for(ll i=1;i<=n&&!ok;i++){
			for(ll j=i+1;j<=n&&!ok;j++){
				ll tt=a[i]+a[j];
				ll l=j+1,r=n,m,val;
				while(l<=r){
					m=l+r>>1,val=a[m];
					if(val==tt){ok=true;break;}
					else if(val<tt)
						l=m+1;
					else	r=m-1;
				}
			}
		}
		if(ok)	cout<<"YES\n";
		else cout<<"NO\n";
	}
}
