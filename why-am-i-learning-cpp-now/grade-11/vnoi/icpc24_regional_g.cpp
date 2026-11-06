#include <iostream>
#include <algorithm>
using namespace std;
#define tname "icpc24_regional_g"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=105,inff=1ll<<62;
ll T,n,a[maxn];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
		cin>>n;
		for(ll i=1;i<=n;i++){cin>>a[i];}
		if(n<=2){lout("0");continue;}
		sort(a+1,a+n+1);
		lout(min(a[n-1]-a[1],a[n]-a[2]));
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
