#include <iostream>
#include <queue>
#include <vector>
using namespace std;
#define tname "qbschool"
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
ll n,m;
void dick(const ll &s){
	priority_queue<edge>pq;
	vector<ll>d(n+5,inff),cnt(n+5,0);
	pq.push({s,0});
	d[s]=0,cnt[s]=1;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		for(const edge &nx:g[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv;
				cnt[v]=cnt[u];
				pq.push({v,d[v]});
			}else if(d[v]==du+dv){
				cnt[v]+=cnt[u];
			}
		}
	}
	lout(d[n]<<" "<<cnt[n]);
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	g.assign(n+5,vector<edge>());
	for(ll i=1,k,u,v,l;i<=m;i++){
		cin>>k>>u>>v>>l;
		g[u].push_back({v,l});
		if(k==2){g[v].push_back({u,l});}
	}
	dick(1);
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
