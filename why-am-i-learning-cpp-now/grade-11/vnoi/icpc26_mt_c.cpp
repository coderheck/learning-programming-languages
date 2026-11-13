#include <iostream>
using namespace std;
#define tname "icpc26_mt_c"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll n,m,res=0,tot=0;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1,a;i<=n;i++){
		cin>>a;
		if(a>=m){
			res++;
			tot+=a;
		}
	}
	cout<<res<<" "<<tot;
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
