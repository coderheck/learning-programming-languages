#include <iostream>
#include <set>
using namespace std;
#define tname "ticket"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<60;
multiset<ll>ms;ll n,m;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1,a;i<=n;i++){cin>>a;ms.insert(a);}
	for(ll i=1,a;i<=m;i++){
		cin>>a;
		auto it=ms.upper_bound(a);
		if(it==ms.begin()){lout("-1");continue;}
		it--;
		lout(*it);
		ms.erase(it);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

