#include <iostream>
#include <string>
// #include <unordered_map>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define tname "icpc26_mt_h"
#define ll long long 
// #define umap unordered_map
#define umap gp_hash_table
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;
ll n,a;
umap<string,ll>cnt;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>s>>a;
		if(cnt.find(s)!=cnt.end()){
			if(cnt[s]>a){cnt[s]=a;}
		}else{
			cnt[s]=a;
		}
	}
	ll res=0;
	for(umap<string,ll>::iterator i=cnt.begin();i!=cnt.end();i++){
		res+=i->second;
	}
	lout(cnt.size()<<" "<<res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

