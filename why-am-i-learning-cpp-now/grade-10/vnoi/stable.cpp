// related article: https://www.geeksforgeeks.org/dsa/number-shortest-paths-unweighted-directed-graph/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define ll long long 
#define tname "stable"
const ll maxN=10005;
ll n,m,s;
struct pos{
	ll	d=10000000007, // khoảng cách ngắn nhất đến đỉnh
		c=0; // số đường đi có khoảng cách ngắn nhất
}; 
vector<pos>res; // thông tin tại đỉnh i
vector<vector<ll>>g(maxN);
void bfs(){ // đường đi ngắn nhất trên đồ thị không trọng số 
	ll depth=1;
	queue<ll>q;q.push(s);
	while(q.size()){
		ll u=q.front();q.pop();
		if(res[u].d>depth){
			res[u]={depth,1};
		}else{
			res[u].c++;
		}
		for(const ll &v:g[u]){
			q.push(v);depth++;
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s;
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	bfs();
}
