#include <iostream>
#include <vector>
using namespace std;
#define tname "ghh"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=10005;
ll n;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	vector<ll>p(1000005,0),res;
	for(ll i=1;i<=1000000;i++){
		for(ll j=i;j<=1000000;j+=i){p[j]+=i;}
	}
	cin>>n;
	res.reserve(n);
	for(ll i=1,a;i<=n;i++){
		cin>>a;
		if((a<<1)<=p[a]){res.push_back(a);}
	}
	lout(res.size());
	if(not res.size()){return 0;}
	for(const ll &x:res){lout(x);}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
