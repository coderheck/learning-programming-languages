#include <iostream>
using namespace std;
#define tname "hn_hsg9_24_a"
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
ll a,b;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
//		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>a>>b;
//	if(a*2<=b*3){lout(a/3);}else{lout((b>>1));}
	lout((a*2<=b*3 ? a/3 : (b>>1)));
}
