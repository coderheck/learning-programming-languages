// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define tname "backtrack_d"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=26,inff=1LL<<62,fulla=(1<<26)-1;
ll n,res=0,a[maxN]={0},maxmask;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	maxmask=1<<n;
	for(ll i=0;i<n;i++){
		cin>>s;
		for(const char &c:s){a[i]|=(1<<(c-'a'));}
	}
	for(ll m=1,cc;m<maxmask;m++){
		cc=0;
		for(ll i=0;i<n;i++){
			if(m&(1<<i)){cc|=a[i];}
		}
		if(cc==fulla){res++;}
	}
	lout(res);
}

