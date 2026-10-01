#include <iostream>
using namespace std;
#define tname "hn_hsg12_26_a"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<60;
ll x,m,n,k,ss;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>x>>m>>n>>k;
	m*=100,n*=100;
	ll m1=m/k,n1=n/k;
	// lout(m1<<" "<<n1);
	lout(x*m1*n1);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
