#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
#define tname "tuchuan"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s,longest;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	getline(cin,s);
	stringstream ss(s);
	string word,sexy;
	vector<string>sexys;
	while(ss>>word){
		for(const char &c:word){
			if(isalpha(c)){sexy+=c;}else{sexy+=' ';}
		}
		stringstream sss(sexy);
		while(sss>>sexy){
			sexys.push_back(sexy);
			if(sexy.size()>longest.size()){longest=sexy;}
			sexy="";
		}
	}
	lout(sexys.size()<<"\n"<<longest);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

