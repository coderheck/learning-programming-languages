// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
using namespace std;
// using namespace __gnu_pbds;
#define tname "krect"
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
const ll maxN=105,inff=1ll<<60;
ll m,n,k,res=0;
char c[maxN][maxN];
ll dem[26],dem2[26];
ll cntdiff(){
	ll cnt=0;
	for(ll i=0;i<26;i++){cnt+=(dem[i]>0);}
	return cnt;
}
ll cntdiff2(){
	ll cnt=0;
	for(ll i=0;i<26;i++){cnt+=(dem2[i]>0);}
	return cnt;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>k;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){cin>>c[i][j];}
	}
	for(ll n1=1;n1<=n;n1++){
		for(ll n2=n1;n2<=n;n2++){
			ll l1=1,l2=1;
			for(ll r=1;r<=m;r++){
				for(ll j=n1;j<=n2;j++){
					dem[c[j][r]-'A']++,dem2[c[j][r]-'A']++;
				}
				while(cntdiff()>k){
					for(ll j=n1;j<=n2;j++){dem[c[j][l1]-'A']--;}
					l1++;
				}
				while(cntdiff2()>=k){
					for(ll j=n1;j<=n2;j++){dem2[c[j][l2]-'A']--;}
					l2++;
				}
				res+=l2-l1;
			}
			for(ll j=0;j<26;j++){dem[j]=dem2[j]=0;}
		}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
