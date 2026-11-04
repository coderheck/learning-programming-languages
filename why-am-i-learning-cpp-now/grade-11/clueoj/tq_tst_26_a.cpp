#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "tq_tst_26_a"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=1000005,inff=1ll<<62;
ll n,k,sum[maxn],res=0;
umap<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>k;
	cnt[0]=1;
	for(ll i=1,a;i<=n;i++){
		cin>>a;
		sum[i]=sum[i-1]+(a&1?-1:1);
		res+=cnt[sum[i]-k];
		cnt[sum[i]]++;
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
