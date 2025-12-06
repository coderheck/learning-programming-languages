#include <iomanip>
#include <ios>
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
#define ll long long 
#define pll pair<ll,ll>
const ll maxN=155,inff=10000000007;
ll n,m,s,t,w;
struct edge{ll u,v,c,d;};
struct node{
	ll cc,cs;
	bool operator>(const node& rhs)const{return cs>rhs.cs;}
};
ll dijkstra(const vector<vector<node>>& gr){
	priority_queue<node,vector<node>,greater<node>>pq;
	vector<ll>dist(n+5,inff);
	pq.push({s,0});dist[s]=0;
	while(pq.size()){
		ll u=pq.top().cc,cu=pq.top().cc;pq.pop();
		if(cu>dist[u]){continue;}
		if(u==t){return cu;}
		for(const node &nx:gr[u]){
			
		}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t>>w;
	vector<edge>es;vector<ll>pc;
	for(ll i=1;i<=m;i++){
		ll u,v,c,d;cin>>u>>v>>c>>d;
		es.push_back({u,v,c,d});
		pc.push_back(c);
	}
	sort(pc.begin(),pc.end());
	pc.erase(unique(pc.begin(),pc.end()),pc.end());
	long double res=10000000007;
	for(const ll& cmin:pc){
		vector<vector<node>>gr(n+5);
		for(const edge& ee:es){
			if(ee.c>=cmin){
				gr[ee.u].push_back({ee.v,ee.d});
				gr[ee.v].push_back({ee.u,ee.d});
			}
		}
		ll mind=dijkstra(gr);
		if(mind!=inff){res=min(res,(long double)w/cmin+mind);}
	}
	cout<<fixed<<setprecision(2)<<res;
}