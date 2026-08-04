// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <cstring>
using namespace std;
// using namespace __gnu_pbds;
#define tname "524 - Prime Ring Problem"
// #define umap gp_hash_table
// #define umap unordered_map
// #define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	cerr<<x<<" ";
const ll maxN=16;
ll n,a[maxN];
bool pr[33]={0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0};
bool used[maxN+1];
void backt(const ll &pos){
	if(pos==n){
		if(pr[a[0]+a[n-1]]){
			for(ll i=0;i<n;i++){
				cout<<a[i]<<(i==n-1?"":" ");
			}
			cout<<"\n";
		}
		return;
	}
	for(ll x=2;x<=n;x++){
		if(!used[x]&&pr[a[pos-1]+x]){
			used[x]=true;
			a[pos]=x;
			backt(pos+1);
			used[x]=false;
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	ll iter=1;
	while(cin>>n){
		if(iter!=1){cout<<"\n";}
		memset(used,false,sizeof used);
		cout<<"Case "<<iter++<<":\n";
		a[0]=1,used[1]=true;
		backt(1);
	}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
