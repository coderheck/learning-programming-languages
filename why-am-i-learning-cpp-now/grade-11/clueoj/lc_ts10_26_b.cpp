// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <string>
using namespace std;
#define tname "lc_ts10_26_b"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max_(a,b) ((a)>(b)?(a):(b))
#define min_(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=200005,inff=1LL<<62;
ll res=0;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	for(const char &c:s){
		if(c>='A'&&c<='Z'){res++;}
	}
	lout(res);
}
