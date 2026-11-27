#include <iostream>
#include <cctype>
#include <string>
using namespace std;
#define tname "caesar"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;ll k;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>k;cin.ignore();
	getline(cin,s);
	k%=26;
	for(ll i=0;i<(ll)s.size();i++){
		if(isalpha(s[i])){
			if(isupper(s[i])){
				if(s[i]-k<'A'){
					ll mirr=s[i]-'A'+1;
					s[i]='Z'-(k-mirr);
				}else{
					s[i]-=k;
				}
			}else{
				if(s[i]-k<'a'){
					ll mirr=s[i]-'a'+1;
					s[i]='z'-(k-mirr);
				}else{
					s[i]-=k;
				}
			}
		}
	}
	lout(s);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
