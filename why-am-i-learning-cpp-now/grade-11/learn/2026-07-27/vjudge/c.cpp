// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
#define tname "c"
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
const ll maxN=5005,inff=1LL<<62;
ll t,n,res=1,lst[maxN];
struct ss{
	ll l,w;
	bool operator<(const ss &rhs)const{return (l!=rhs.l) ? l<rhs.l : w<rhs.w;}
}a[maxN];
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n;
		for(ll i=0;i<n;i++){cin>>a[i].l>>a[i].w;}
		sort(a,a+n);
		res=1,lst[0]=a[n-1].w;
		for(ll i=n-2;i>=0;i--){
			ll pos=lower_bound(lst,lst+res,a[i].w)-lst;
			if(pos==res){
				res++,lst[pos]=a[i].w;
			}else{
				lst[pos]=min(lst[pos],a[i].w);
			}
		}
		lout(res);
	}
}

