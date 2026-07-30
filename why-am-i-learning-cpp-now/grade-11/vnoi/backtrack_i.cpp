// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <string>
using namespace std;
#define tname "backtrack_i"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
ll n,m,res=0,c[10],a[10];
string s;
ll popcnt(const ll &a){
	// length of longlong: 64 bits
	ll i=0,r=0;
	while(i<64){
		if(a&(1ll<<i)){r++;}
		i++;
	}
	return r;
}
void backt(ll i,ll cur,ll k){
	if(i==n){
		for(ll i=0;i<m;i++){
			if(n-popcnt(cur^a[i])!=c[i]){return;}
		}
		res++;
		return;
	}
	backt(i+1,cur^1ll<<i,k);
	if(k){backt(i+1,cur,k-1);}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=0;i<m;i++){
		cin>>s>>c[i];
		for(ll j=0;j<n;j++){
			if(s[j]=='1'){a[i]^=1ll<<j;}
		}
	}
	backt(0,a[0],c[0]);
	lout(res);
}
