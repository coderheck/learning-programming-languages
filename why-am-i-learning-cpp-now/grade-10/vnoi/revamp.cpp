#include <functional>
#include <iostream>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long 
#define tname "revamp"
const ll maxN=10005,inff=100000000007;
ll n,m,k,par[maxN];
struct edge{
	ll v,w;
	bool operator>(const edge& rhs)const{return w>rhs.w;}
};
vector<vector<edge>>graph(maxN);
void ijk(){
	priority_queue<edge,vector<edge>,greater<edge>>pq;
	vector<ll>d(n+5,inff);
	pq.push({1,0}),d[1]=0;
	while (pq.size()) {
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		if(u==n){return;}
		for(const edge& nx:graph[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv,pq.push({v,d[v]});
                par[v]=u;
			}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>k;
	for(ll i=1;i<=m;i++){
		ll u,v,l;cin>>u>>v>>l;
		graph[u].push_back({v,l});
		graph[v].push_back({u,l});
	}
    ijk();
	// fuck dp
    vector<ll>path,tt;
    for(ll u=n;u!=0;u=par[u]){
        path.push_back(u);
        if(u==1){break;}
    }
    reverse(path.begin(),path.end());
	// for(const ll& u:path){cout<<u<<" ";}
    for(ll i=0;i+1<path.size();i++){
        ll u=path[i],v=path[i+1];
        for(const edge& e:graph[u]){
            if(e.v==v){tt.push_back(e.w);break;}
        }
    }
    sort(tt.begin(),tt.end());
    ll res=0;
    for(ll i=0;i<k;i++){res+=tt[i];}
	cout<<res;
}

