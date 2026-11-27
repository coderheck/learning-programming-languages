#include <iostream>
using namespace std;
#define tname "gandoixung"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
bool check(const string &s,ll l,ll r){
	while(l<r){
		if(s[l]!=s[r]){return false;}
		l++,r--;
	}
	return true;
}
ll T;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>T;
	while(T--){
		cin>>s;
		ll l=0,r=s.size()-1,p=0;
		while(l<r){
			if(s[l]!=s[r]){p++;}
			l++,r--;
		}
		if(p<=1){lout("YES");continue;}
		l=0,r=s.size()-1;
		bool good=false;
		while(l<r){
			if(s[l]!=s[r]){
				good=check(s,l+1,r)||check(s,l,r-1);
				break;
			}
			l++,r--;
		}
		if(good){lout("YES");}else{lout("NO");}
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
