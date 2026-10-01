#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
#define tname "congviec"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<60;
multiset<ll>ms;
ll n,m,res=0,a[maxn];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){cin>>a[i];}
	for(ll i=1,b;i<=m;i++){cin>>b;ms.insert(b);}
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++){
		auto it=ms.lower_bound(a[i]);
		if(it!=ms.end()){
			res++;
			ms.erase(it);
		}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
