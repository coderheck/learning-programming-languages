#include <iostream>
#include <iterator>
#include <set>
using namespace std;
#define tname "tname"
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<60;
set<ll>pos;
multiset<ll>ms;
ll n,m,res=0,p[maxn];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;
	pos.insert(0);pos.insert(m);ms.insert(m);
	for(ll i=1;i<=n;i++){cin>>p[i];}
	for(ll i=1;i<=n;i++){
		auto it=pos.upper_bound(p[i]);
		ll	R=*it,L=*prev(it);
		ms.erase(ms.find(R-L));
		ms.insert(p[i]-L);ms.insert(R-p[i]);
		pos.insert(p[i]);
		oout(*ms.rbegin());
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
