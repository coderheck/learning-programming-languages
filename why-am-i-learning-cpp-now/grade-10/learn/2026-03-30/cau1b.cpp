#include <iostream>
#include <unordered_map>
using namespace std;
#define ll long long 
#define tname "cau1b"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
	cout<<x<<"\n"; \
	// cerr<<x<<"\n";
const ll maxN=100005;
ll n,a;unordered_map<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin>>n;
	for(ll i=1,a;i<=n;i++){cin>>a;cnt[a]++;}
	lout(cnt.size());
}

