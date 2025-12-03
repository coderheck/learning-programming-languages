#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
#define ll long long 
#define tname "safenet2"
const ll maxN=30005;
ll n,m,tt=0,bcc=0,res=0,num[maxN],low[maxN];
stack<ll>st;
vector<vector<ll>>g(maxN);
void dfs(const ll& u,const ll& p){
	num[u]=low[u]=++tt,st.push(u);
	for(const ll &v:g[u]){
		if(v==p){continue;}
		if(num[v]){
			low[u]=min(low[u],num[v]);
		}else{
			dfs(v,u);
			low[u]=min(low[u],low[v]);
			if(low[v]>=num[u]){
				ll x,c=1;
				do{
					x=st.top();st.pop();
					c++;
				}while(v!=x);
				if(c>=3){res=max(res,c);}
			}
		}
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	for(ll i=1;i<=n;i++){
		if(!num[i]){dfs(i,-1);}
	}
	cout<<res;
}

