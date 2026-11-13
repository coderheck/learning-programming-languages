#include <algorithm>
#include <iostream>
using namespace std;
#define tname "icpc26_mt_j"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;ll a[25];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	for(ll i=1;i<=20;i++){cin>>s>>a[i];}
	sort(a+1,a+20+1);
	if(a[19]+9>=a[20]){lout("NO");}else{lout("YES");}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
