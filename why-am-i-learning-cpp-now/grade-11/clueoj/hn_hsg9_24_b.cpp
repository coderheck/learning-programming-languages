#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define tname "hn_hsg9_24_b"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
ll gcd(const ll &a,const ll &b){return b?gcd(b,a%b):a;}
ll lcm(const ll &a,const ll &b){return a/gcd(a,b)*b;}
ll a,b;
vector<ll>res;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
	ll gc=gcd(a,b);
	for(ll i=1;i*i<=gc;i++){
		if(gc%i==0){
			res.push_back(i);
			ll j=gc/i;
			if(i!=j){res.push_back(j);}
		}
	}
	if(res.size()<2){lout("-1");return 0;}
	sort(res.begin(),res.end());
	// for(const ll &x:res){oout(x);}
	lout(*(res.end()-2));
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
