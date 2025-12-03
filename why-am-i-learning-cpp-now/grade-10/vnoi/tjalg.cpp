#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long 
#define tname "tjalg"
const ll maxN=10005;
ll n,m,tt=0,scc=0,num[maxN],low[maxN];
bool vis[maxN];
vector<vector<ll>>g(maxN);
stack<ll>st;
void dfs(const ll &u){
	num[u]=low[u]=++tt,vis[u]=true,st.push(u);
	for(const ll& v:g[u]){
		if(!num[v]){
			dfs(v);
			low[u]=min(low[u],low[v]);
		}else if(vis[v]){
			low[u]=min(low[u],num[v]);
		}
	}
	if(low[u]==num[u]){
		scc++;ll v;
		do{
			v=st.top();st.pop();
			vis[v]=false;
		}while(v!=u&&st.size());
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){ll u,v;cin>>u>>v;g[u].push_back(v);}
	for(ll i=1;i<=n;i++){
		if(!num[i]){dfs(i);}
	}
	cout<<scc;
}
