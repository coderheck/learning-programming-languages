#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define ll long long 
#define tname "circuit"
const ll maxN=205;
vector<vector<ll>> g(maxN);
ll n,s,u,v,par[maxN];
bool vis[maxN],ff=false;

ll cycle_start = -1, cycle_end = -1;

void dfs(const ll &u,const ll &p){
    vis[u] = true;
    par[u] = p;

    for(const ll &v : g[u]){
        if(v == p) continue;
        if(vis[v]){
            ff = true;
            cycle_end = u;
            cycle_start = v;
            return;
        }
        dfs(v, u);
        if(ff) return;
    }
}

int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);

    cin >> n >> s;
    while(cin >> u >> v){
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(s, -1);

    if(!ff){
        cout << "NO";
        return 0;
    }

    cout << "YES\n";

    vector<ll> path;
    path.push_back(cycle_start);

    for(ll x = cycle_end; x != cycle_start; x = par[x])
        path.push_back(x);

    path.push_back(cycle_start);   // đóng chu trình

    for(ll x : path) cout << x << " ";

    return 0;
}

