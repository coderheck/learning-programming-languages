#include <iostream>
#include <algorithm>
using namespace std;
#define tname "csdt"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll T,n;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
		cin>>n;
		ll res=0;
		for(ll x=1,l;x<=n;x++){
			l=max(x+1,n-x+1);
			if((l-x)&1){l++;}
			if(l<=n){res+=((n-l)>>1)+1;}
		}
		lout(res);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
