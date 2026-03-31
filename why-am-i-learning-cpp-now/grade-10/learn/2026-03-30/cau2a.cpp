#include <iostream>
#include <map>
using namespace std;
#define ll long long 
#define tname "cau2a"
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
	cout<<x<<"\n"; \
	// cerr<<x<<"\n";
map<char,ll>cnt;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin>>s;
	for(const char &c:s){cnt[c]++;}
	lout(cnt.size());
	for(map<char,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		lout(i->first<<" "<<i->second);
	}
}


