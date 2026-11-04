#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "tq_tst_23_a"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=1005;
ll n,a[maxn],res=0;
umap<ll,bool>mark;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];mark[a[i]]=true;}
	for(ll i=1;i<=n;i++){
		for(ll j=i+1;j<=n;j++){
			ll avg=(a[i]+a[j])>>1;
			if(mark[avg]){res++;}
		}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
