#include <iostream>
#include <stack>
#include <vector>
#include <climits>
#include <queue>
using namespace std;
#define ll long long 
#define tname "shortest_path"
const ll maxN=500005;
ll n,m,s,t,U,V,W;
struct edge{
	ll v,w;
	bool operator<(const edge &rhs)const{return w>rhs.w;}
};
bool ijk(const vector<vector<edge>>&g,vector<ll>&trace){
	priority_queue<edge>pq;
	vector<ll>d(n+5,LLONG_MAX);
	pq.push({s,0});d[s]=0;
	while(pq.size()){
		ll u=pq.top().v,du=pq.top().w;pq.pop();
		if(du!=d[u]){continue;}
		if(u==t){cout<<d[t]<<" ";return true;}
		for(const edge &nx:g[u]){
			ll v=nx.v,dv=nx.w;
			if(d[v]>du+dv){
				d[v]=du+dv;
				pq.push({v,d[v]});
				trace[v]=u;
			}
		}
	}
	cout<<"-1";
	return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	vector<vector<edge>>g(n+5);
	vector<ll>trace(n+5,-1);
	for(ll i=1;i<=m;i++){
		cin>>U>>V>>W;
		g[U].push_back({V,W});
	}
	if(ijk(g,trace)){
		stack<ll>st;
		for(ll u=t;u!=-1;u=trace[u]){
			st.push(u);
			if(u==s){break;}
		}
		cout<<st.size()-1<<"\n";
		while(st.size()-1){
			cout<<st.top()<<" ";st.pop();
			cout<<st.top()<<"\n";
		}
	}
}
