// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "thhv25_dx05_10_a"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=100005,maxP=1000000,inff=1LL<<62;
ll m,n,a[maxN]={0};
bool cock(const ll &len){
	for(ll i=1;i+len-1<=n;i++){
		if(a[i+len-1]-a[i-1]<m){return false;}
	}
	return true;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>m>>n;
	for(ll i=1;i<=n;i++){cin>>a[i];a[i]+=a[i-1];}
	ll l=1,r=n,m,res=n;
	while(l<=r){
		m=(l+r)>>1;
		if(cock(m)){res=m;r=m-1;}else{l=m+1;}
	}
	lout(res);
}

