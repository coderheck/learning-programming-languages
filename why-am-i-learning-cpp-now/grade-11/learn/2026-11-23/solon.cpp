#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define tname "solon"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll n;
vector<string>ss;
string s;
string getvalidnum(const string &s){
	ll st=-1;
	for(ll i=0;i<(ll)s.size();i++){
		if(s[i]!='0'){st=i;break;}
	}
	if(st==-1){return "0";}
	return s.substr(st);
}
bool cmp(const string &a,const string &b){
	return a.size()!=b.size() ? a.size() < b.size() : a<b;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	ss.resize(n+5);
	for(ll i=1;i<=n;i++){cin>>ss[i];}
	for(ll i=1;i<=n;i++){
		ss[i]=getvalidnum(ss[i]);
	}
	sort(ss.begin()+1,ss.begin()+1+n,cmp);
	for(ll i=1;i<=n;i++){lout(ss[i]);}
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC
