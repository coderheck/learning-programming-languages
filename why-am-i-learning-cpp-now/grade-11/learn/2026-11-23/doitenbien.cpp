#include <cctype>
#include <iostream>
using namespace std;
#define tname "doitenbien"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
#define INV lout("INVALID");return 0;
// const ll maxn=200005,inff=1ll<<62;
string s,res="";
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	bool camel=false,snake=false;
	char lst='*';
	for(ll i=0;i<(ll)s.size();i++){
		if(i==0){
			if(not isalpha(s[i])){INV}
			else if(isupper(s[i])){INV}
		}else{
			if(s[i]=='_'){
				if(!camel && !snake){
					snake=true;
				}else if(camel){INV}
			}else if(isupper(s[i])){
				if(!camel && !snake){
					camel=true;
				}else if(snake){INV}
			}else if(!isalpha(s[i])){INV}
		}
		if(isupper(lst) && isupper(s[i])){INV}
		if(lst=='_'&&s[i]=='_'){INV}
		if(isupper(s[i]) && camel){
			res+='_';res+=tolower(s[i]);
		}else if(s[i]=='_' && snake){
			if(i+1>=(ll)s.size()){INV}
			res+=toupper(s[++i]);
		}else{
			res+=s[i];
		}
		lst=s[i];
	}
	lout(res);
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC
