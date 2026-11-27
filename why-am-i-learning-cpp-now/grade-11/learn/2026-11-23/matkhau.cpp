#include <cctype>
#include <iostream>
#include <string>
using namespace std;
#define tname "matkhau"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
#define WEA lout("WEAK");return 0;
// const ll maxn=200005,inff=1ll<<62;
// !@#$%^&*()-+
bool spec(const char &c){
	return c=='!' || c=='@' || c=='#' || c=='$' || c=='%' || c=='^' ||
			c=='&' || c=='*' || c=='(' || c==')' || c=='-' || c=='+';
}
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	getline(cin,s);
	if(s.size()<8){WEA}
	bool up=false,lo=false,di=false,sp=false;
	char lst0=-1,lst1=-1;
	for(ll i=0;i<(ll)s.size();i++){
		if(s[i]==' '){WEA}
		if(isalpha(s[i])){
			if(isupper(s[i])){up=true;}else if(tolower(s[i])){lo=true;}
		}
		if(isdigit(s[i])){di=true;}
		if(spec(s[i])){sp=true;}
		if(lst0==lst1 && lst1==s[i]){WEA}
		lst0=lst1;lst1=s[i];
	}
	if(up and lo and di and sp){
		lout("STRONG");
	}else{WEA}
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC

