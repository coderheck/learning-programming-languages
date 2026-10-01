#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
#define tname "1644"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<62;
ll n,L,R,p[maxn],res=-inff;
multiset<ll>ms;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>L>>R;
	for(ll i=1,a;i<=n;i++){cin>>a;p[i]=p[i-1]+a;}
	for(ll i=L;i<=n;i++){
		if(i>R){ms.erase(ms.find(p[i-R-1]));}
		ms.insert(p[i-L]);
		res=max(res,p[i]-*ms.begin());
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
