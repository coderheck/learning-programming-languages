#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
#define tname "taitrong"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=1005,inff=1ll<<62;
struct edge{
	ll v, w;
	bool operator < (const edge &rhs) const {return w < rhs.w;}
};
vector<vector<edge>> g;
ll n, m, s, t;
ll samewin(){
	priority_queue<edge> pq;
	vector<ll> d(n + 5, -1);
	pq.push({s, inff}); d[s] = inff;
	while(pq.size()) {
		ll u = pq.top().v, du = pq.top().w; pq.pop();
		if(du != d[u]){continue;}
		if(u == t){return du;}
		for(const edge &nx : g[u]){
			ll v = nx.v, dv = nx.w, minn = min(dv,du);
			if(d[v] < minn){
				d[v] = minn;
				pq.push({v, minn});
			}
		}
	}
	return -1;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin >> n >> m >> s >> t;
	g.assign(n + 5, vector<edge>());
	for(ll i=1, x, y, z; i<=m; i++){
		cin >> x >> y >> z;
		g[x].push_back({y, z});
		g[y].push_back({x, z});
	}
	lout(samewin());
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
