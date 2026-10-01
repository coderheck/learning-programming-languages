#include <iostream>
#include <string>
#include <map>
using namespace std;
#define tname "dl_ts10_26_b"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<60;
string s;
map<char,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	for(const char &c:s){cnt[c]++;}
	for(map<char,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		lout(i->first<<":"<<i->second);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
