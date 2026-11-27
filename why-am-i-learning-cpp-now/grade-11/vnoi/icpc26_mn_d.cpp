#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
#define tname "icpc26_mn_d"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
bool ispl(string s) {
	int low = 0;
	int high = s.size() - 1;
	while (low < high) {
		if (s[low] != s[high]){return false;}
		++low;
		--high;
	}
	return true;
}
umap<char,ll>cnt;
string s;ll res=0,maxiters=0;
int main(){
	if(fopen(tname".inp","r")){
		// freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	for(const char &c:s){cnt[c]++;}
	if(cnt.size()==1){lout("-1");return 0;}
	maxiters=s.size()>>1;
	for(auto it:cnt){
		res+=it.second>>1;
	}
	lout((res==maxiters?res:res+1));
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
