// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
// using namespace __gnu_pbds;
#define tname "d"
// #define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=30005,maxQ=200005,inff=1ll<<60;
struct quer{
	ll i,j,k,id;
	bool operator<(const quer &rhs)const{return k<rhs.k;}
}qq[maxQ];
struct aa{
	ll a,p;
	bool operator<(const aa &rhs)const{return a<rhs.a;}
}a[maxN];
ll n,q,bit[maxN],res[maxQ];
void add(ll i){
	for(;i<=n;i+=i&-i){bit[i]++;}
}
ll sum(ll i){
	ll r=0;
	for(;i!=0;i-=i&-i){r+=bit[i];}
	return r;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>a[i].a;a[i].p=i;}
	cin>>q;
	for(ll i=1;i<=q;i++){
		cin>>qq[i].i>>qq[i].j>>qq[i].k;qq[i].id=i;
	}
	sort(a+1,a+n+1);
	sort(qq+1,qq+q+1);
	ll pos=n;
	for(ll i=q;i>=1;i--){
		quer &q = qq[i];
		while(a[pos].a>q.k){add(a[pos--].p);}
		res[q.id]=sum(q.j)-sum(q.i-1);
	}
	for(ll i=1;i<=q;i++){lout(res[i]);}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC


