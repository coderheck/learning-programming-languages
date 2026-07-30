// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
#define tname "b"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=1005,inff=1LL<<62;
ll n,q,a[maxN][maxN],bit[maxN][maxN];
void upd(ll u,ll v,ll delta){
	for(ll i=u;i<=n;i+=i&-i){
		for(ll j=v;j<=n;j+=j&-j){bit[i][j]+=delta;}
	}
}
ll fch(ll u,ll v){
	ll sum=0;
	for(ll i=u;i>0;i-=i&-i){
		for(ll j=v;j>0;j-=j&-j){sum+=bit[i][j];}
	}
	return sum;
}
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>q;
	for(ll i=1;i<=n;i++){
		cin>>s;
		for(ll j=1;j<=n;j++){
			a[i][j]=(s[j-1]=='*');
			if(a[i][j]==1){upd(i,j,1);}
		}
	}
	ll x1,y1,x2,y2;
	while(q--){
		cin>>y1>>x1>>y2>>x2;
		lout(fch(y2,x2) - fch(y1-1,x2) - fch(y2,x1-1) + fch(y1-1,x1-1));
	}
}
