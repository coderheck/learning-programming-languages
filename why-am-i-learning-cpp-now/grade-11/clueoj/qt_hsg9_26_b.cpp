#include <iostream>
#include <string>
#include <map>
#include <sstream>
using namespace std;
#define tname "qt_hsg9_26_b"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;
map<ll,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	getline(cin,s);
	stringstream ss(s);
	while(ss>>s){cnt[s.size()]++;}
	lout(cnt.size());
	for(map<ll,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		lout(i->first<<" "<<i->second);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

