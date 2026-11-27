#include <iostream>
#include <cctype>
#include <string>
using namespace std;
#define tname "giainen"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll k;string s,res;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>k>>s;
	res.reserve(k);
	ll cc=0;bool nn=false;
	for(const char &c:s){
		if(isdigit(c)){
			cc=cc*10+(c-'0');
			nn=true;
			if(cc>k){lout("OVERFLOW");return 0;}
		}else{
			ll r=nn?cc:1;
			if((ll)res.size()+r > k){lout("OVERFLOW");return 0;}
			res.append(r,c);
			cc=0;nn=false;
		}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
