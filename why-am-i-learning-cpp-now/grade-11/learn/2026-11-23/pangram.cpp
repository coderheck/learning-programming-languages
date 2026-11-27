#include <cctype>
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
#define tname "pangram"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;
umap<char,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	getline(cin,s);
	for(const char &c:s){
		if(isalpha(c)){cnt[tolower(c)]++;}
	}
	if(cnt.size()==26){
		lout("YES");
		return 0;
	}else{
		lout("NO");
	}
	for(char c='a';c<='z';c++){
		if(not cnt[c]){cout<<c;}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
