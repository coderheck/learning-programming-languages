#include <iostream>
#include <string>
using namespace std;
#define tname "guessthenumber"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
// const ll maxN=200005,inff=1ll<<60;
string rep;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	ll l=1,r=1000000,m=-1;
	while(l<=r){
		m=(l+r)>>1;
		lout(m);cout.flush();
		cin>>rep;
		if(rep==">="){l=m+1;}else{r=m-1;}
	}
	lout("! "<<r);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

