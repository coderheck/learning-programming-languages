#include <iostream>
#include <string>
using namespace std;
#define tname "ghepdx"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
bool pl(const string& s,ll l,ll r){
    while(l<r){
        if(s[l]!=s[r]){return false;}
        l++;r--;
    }
    return true;
}
bool check(const string& a,const string& b){
    ll l=0,r=(ll)a.size()-1;
    while(l<r && a[l]==b[r]){l++;r--;}
    return pl(a,l,r) || pl(b,l,r);
}
string a,b;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
	if(check(a,b) or check(b,a)){lout("YES");}else{lout("NO");}
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC
