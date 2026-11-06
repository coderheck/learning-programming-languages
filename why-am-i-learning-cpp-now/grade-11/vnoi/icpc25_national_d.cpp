// bro idk how to do ts

#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "icpc25_national_d"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<62,modn=998244353;
ll T,n,a[maxn];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
		cin>>n;
		umap<ll,ll>cnt;
		cnt.reserve(n+5);
		ll res=0;
		for(ll i=1;i<=n;i++){
			cin>>a[i];
			res+=(cnt[a[i]]%modn+cnt[a[i]+1]%modn+cnt[a[i]-1]%modn)%modn;
			cnt[a[i]]=(cnt[a[i]]+1)%modn;
		}
		lout(res);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
