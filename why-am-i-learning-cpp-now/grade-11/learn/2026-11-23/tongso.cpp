#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
#define tname "tongso"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
void bigAdd(string &res,string a,string b){
	ll sz=max(a.size(),b.size());
	res.resize(sz);
	while((ll)a.size()<sz){a='0'+a;}
	while((ll)b.size()<sz){b='0'+b;}
	ll car=0;
	for(ll i=sz-1;i>=0;i--){
		ll t=(a[i]-'0')+(b[i]-'0')+car;
		car=t/10;t%=10;
		res[i]=char('0'+t);
	}
	if(car){res='1'+res;}
}
string s;vector<string>nums;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	string cur="";
	for(ll i=0;i<(ll)s.size();i++){
		if(isalpha(s[i])){
			while(cur.size()&&cur[0]=='0'){cur.erase(0,1);}
			if(cur.size()){
				nums.push_back(cur);
				cur="";
			}
		}else if(isdigit(s[i])){
			cur+=s[i];
		}
	}
	if(cur.size()){nums.push_back(cur);}
	string res="0";
	for(const string &x:nums){
		bigAdd(res,res,x);
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
