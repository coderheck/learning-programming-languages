#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "daydep"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=100005;
ll n,a,res=0;
umap<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1,a;i<=n;i++){cin>>a;cnt[a]++;}
	for(umap<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		if(i->first!=i->second){res+=i->second;}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
