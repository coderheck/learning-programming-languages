#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
#include <unordered_map>
using namespace std;
#define tname "chuanhoa"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
#define umap unordered_map
// const ll maxn=200005,inff=1ll<<62;
ll n;
string s;
umap<string,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;cin.ignore();
	while(n--){
		getline(cin,s);
		stringstream ss(s);
		string words,word,inits;
		while(ss>>word){
			for(char &c:word){c=tolower(c);}
			word[0]=toupper(word[0]);
			words+=word+" ";
			inits+=tolower(word[0]);
		}
		words.pop_back();
		inits.pop_back();
		word[0]=tolower(word[0]);
		inits=word+inits;
		if(cnt.find(inits)!=cnt.end()){
			inits+=to_string(cnt[inits]);
			cnt[inits]++;
		}else{
			cnt[inits]=2;
		}
		lout(words<<"\n"<<inits<<"@chuyentin.edu.vn");
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
