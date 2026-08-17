// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <algorithm>
using namespace std;
// using namespace __gnu_pbds;
#define tname "abc232_d"
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
const ll maxN=1005;
ll h,w,res=0,	dx[]={1,0},
				dy[]={0,1};
char a[maxN][maxN];
bool vis[maxN][maxN];
struct pos{ll x,y;};
void dfs(ll x,ll y,ll d=0){
	vis[x][y]=true;d++;
	for(ll i=0;i<2;i++){
		ll u=x+dx[i],v=y+dy[i];
		if(u<1||v<1||u>h||v>w||vis[u][v]||a[u][v]=='#'){continue;}
		dfs(u,v,d);
	}
	res=max(res,d);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>h>>w;
	for(ll i=1;i<=h;i++){
		for(ll j=1;j<=w;j++){cin>>a[i][j];}
	}
	dfs(1,1);
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
