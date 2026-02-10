#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "daybian"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=200005;
ll n,k,a,sum=0,res=0;
umap<ll,ll>cnt;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    cnt[0]=1;
    for(ll i=1;i<=n;i++){
        cin>>a;
        sum+=a,res+=cnt[sum-k],cnt[sum]++;
    }
    lout(res);
}
