#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "ksdivc"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005;
ll n,m,a[maxn],res=0;
umap<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	cnt[0]=0;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		ll r=(a[i]%m+m)%m;
		res+=cnt[(m-r)%m];
		cnt[r]++;
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
