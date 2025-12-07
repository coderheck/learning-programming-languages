#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
#define ll long long 
const ll maxN=200005,inff=10000000007;
ll n,m,s,t,par[maxN];bool vis[maxN];
vector<vector<ll>>g(maxN);
ll bfs(){
	queue<ll>q;
	q.push(s);
	while(q.size()){
		ll u=q.front();q.pop();
		if(u==t){return 1;}
		for(const ll &v:g[u]){
			if(!vis[v]){
				vis[v]=true,q.push(v),par[v]=u;
			}
		}
	}
	cout<<"-1";
	return -1;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m>>s>>t;
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	if(bfs()==-1){return 0;}
	stack<ll>st;
	for(ll u=t;u!=0;u=par[u]){
		st.push(u);
		if(u==s){break;}
	}
	cout<<st.size()-1<<"\n";
	while(st.size()){cout<<st.top()<<" ";st.pop();}
}
