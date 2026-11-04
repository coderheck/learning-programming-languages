#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define tname "20C"
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
vector<ll>trace;
ll n,m;
bool dijk(){
	priority_queue<edge>pq;
	vector<ll>d(n+5,inff);
	trace.assign(n+5,-1);
	pq.push({1,0});d[1]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		for(const edge &nx:g[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv;
				trace[v]=u;
				pq.push({v,d[v]});
			}
		}
	}
	return d[n]!=inff;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	g.assign(n+5,vector<edge>());
	for(ll i=1,a,b,w;i<=m;i++){
		cin>>a>>b>>w;
		g[a].push_back({b,w});
		g[b].push_back({a,w});
	}
	if(!dijk()){lout("-1");return 0;}
	vector<ll>p;
	ll i=n;
	do{
		p.push_back(i);
		i=trace[i];
	}while(i!=-1);
	for(ll i=p.size()-1;i>=0;i--){cout<<p[i]<<" ";}
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
