#include <iostream>
#include <vector>
using namespace std;
#define tname "countdiv"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll a,b,k,res=0;
vector<ll>d;
int main(){
	if(fopen(tname".inp","r")){
		// freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b>>k;
	d.assign(b+5,0);
	for(ll i=1;i<=b;i++){
		for(ll j=i;j<=b;j+=i){d[j]++;}
	}
	for(ll i=a;i<=b;i++){
		if(d[i]==k){res++;}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
