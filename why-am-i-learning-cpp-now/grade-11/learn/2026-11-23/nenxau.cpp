#include <iostream>
#include <string>
using namespace std;
#define tname "nenxau"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s,res;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	ll cnt=0;char cur='%';
	for(ll i=0;i<(ll)s.size();i++){
		if(i==0){
			cur=s[i];cnt=1;
		}else if(s[i]==cur){
			cnt++;
		}else{
			if(cnt>1){res+=to_string(cnt);}
			res+=cur;
			cur=s[i];cnt=1;
		}
	}
	if(cnt>1){res+=to_string(cnt);}
	res+=cur;
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
