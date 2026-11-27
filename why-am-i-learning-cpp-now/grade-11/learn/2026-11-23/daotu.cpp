#include <iostream>
#include <string>
using namespace std;
#define tname "daotu"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	getline(cin,s);
	string tmp,res;
	for(const char &c:s){
		if(c==' '){
			if(tmp.size()){
				for(auto it=tmp.rbegin();it!=tmp.rend();it++){
					res+=*it;
				}
				tmp="";
			}
			res+=c;
		}else{
			tmp+=c;
		}
	}
	if(tmp.size()){
		for(auto it=tmp.rbegin();it!=tmp.rend();it++){
			res+=*it;
		}
		tmp="";
	}
	lout(res);
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC
