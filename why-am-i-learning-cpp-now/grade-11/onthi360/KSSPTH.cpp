#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define tname "KSSPTH"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=200005,inff=1ll<<62;
struct edge{
	ll v,w;
	bool operator<(const edge &rhs)const{return w>rhs.w;}
};
vector<vector<edge>>g;
ll n,m,s,t;
bool dick(){
	priority_queue<edge>pq;
	vector<ll>d(n+5,inff);
	pq.push({s,0});d[s]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(d[u]!=du){continue;}
		if(u==t){lout(d[u]);return true;}
		for(const edge &nx:g[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv;
				pq.push({v,d[v]});
			}
		}
	}
	return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	g.assign(n+5,vector<edge>());
	for(ll i=1,u,v,w;i<=m;i++){
		cin>>u>>v>>w;
		g[u].push_back({v,w});
	}
	if(not dick()){lout("-1");}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
