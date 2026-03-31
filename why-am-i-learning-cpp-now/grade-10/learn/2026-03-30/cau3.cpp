#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define tname "cau3"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
	cout<<x<<"\n"; \
	// cerr<<x<<"\n";
const ll maxN=100005;
ll n,m,res[maxN],resc=0;
unordered_map<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1,a;i<=m;i++){cin>>a;cnt[a]++;}
	for(ll i=1;i<=n;i++){if(!cnt[i]){res[resc++]=i;}}
	lout(resc);
	for(ll i=0;i<resc;i++){cout<<res[i]<<" ";}
}

