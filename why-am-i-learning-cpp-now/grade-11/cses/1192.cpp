// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table/ordered set
// #include <ext/pb_ds/tree_policy.hpp> // used with above
// #include <unordered_map>					// for normal umap
#include <iostream>
#include <queue>
using namespace std;
// using namespace __gnu_pbds;
#define tname "1192"
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
ll n,m,res=0,	dx[]={-1,0,1,0},
				dy[]={0,1,0,-1};
char a[maxN][maxN];
bool vis[maxN][maxN];
struct pos{ll x,y;};
void bfs(const ll &i,const ll &j){
	res++;
	queue<pos>q;
	q.push({i,j});vis[i][j]=true;
	while(q.size()){
		ll u=q.front().x,v=q.front().y;q.pop();
		for(ll i=0;i<4;i++){
			ll nu=u+dx[i],nv=v+dy[i];
			if(nu<1||nv<1||nu>n||nv>m||vis[nu][nv]||a[nu][nv]=='#'){continue;}
			vis[nu][nv]=true;q.push({nu,nv});
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){cin>>a[i][j];}
	}
	for(ll i=1;i<=n;i++){
		for(ll j=1;j<=m;j++){
			if(a[i][j]=='.'&&!vis[i][j]){bfs(i,j);}
		}
	}
	lout(res);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC

