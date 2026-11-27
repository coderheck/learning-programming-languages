#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "bbkg"
#define ll long long 
#define umap unordered_map
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
bool vv(const char &c){
	return c=='u'||c=='e'||c=='o'||c=='a'||c=='i';
}
ll T;string s;
ll cntl[128],cntr[128];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T>>s;
	if(T==2){
		string tt;
		for(const char &c:s){if(!vv(c)){tt+=c;}}
		s=tt;
	}
	for(const char &c:s){cntr[int(c)]++;}
	ll res=0,tot=0;
	for(ll i=0;i<(ll)s.size();i++){
		ll c=int(s[i]);
		tot-=cntl[c];
		cntr[c]--;
		res+=tot-cntl[c]*cntr[c];
		tot+=cntr[c];
		cntl[c]++;
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
