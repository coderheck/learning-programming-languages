#include <iostream>
#include <string>
using namespace std;
#define tname "ketphim"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	getline(cin,s);
	string res;res.reserve(s.size());
	for(const char &c:s){
		ll n=res.size();
		if(n>=2 && res[n-1]==c && res[n-2]==c){continue;}
		res+=c;
	}
	lout(res);
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC

