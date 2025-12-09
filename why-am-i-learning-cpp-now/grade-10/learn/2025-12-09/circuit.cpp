#include <iostream>
#include <stack>
#include <vector>
using namespace std;
#define ll long long 
#define tname "circuit"
const ll maxN=205;
vector<vector<ll>>g(maxN);
ll n,s,u,v,par[maxN],cs=-1,ce=-1;
bool vis[maxN],ff=false;
bool dfs(const ll &u,const ll &p,const ll &cc){
	vis[u]=true;
	for(const ll &v:g[u]){
		if(!vis[v]){
			if(dfs(v,u,cc+1)){return true;}
		}else if(v!=p){return true;}
	}
	return false;
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s;
	while(cin>>u>>v){
		g[u].push_back(v);
		g[v].push_back(u);
	}
	if(!dfs(s,s,0)){cout<<"NO";return 0;}
	cout<<"YES\n";
	stack<ll>st;
	for(ll u=ce;u!=0;u=par[u]){
		st.push(s);
		if(u==cs){break;}
	}
	cout<<st.size()<<" ";
	while(st.size()){cout<<st.top()<<" ";st.pop();}
}
