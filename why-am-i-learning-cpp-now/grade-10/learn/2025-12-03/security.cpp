#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
#define ll long long 
#define tname "security"
const ll maxN=100005,inff=100000000007,modN=1000000007;
ll n,m,tt=0,price=0,ways=1,num[maxN],low[maxN],c[maxN];
stack<ll>st;bool vis[maxN];
vector<vector<ll>>g(maxN);
void dfs(const ll &u){
	num[u]=low[u]=++tt,st.push(u),vis[u]=true;
	for(const ll& v:g[u]){
		if(!num[v]){
			dfs(v);
			low[u]=min(low[u],low[v]);
		}else if(vis[v]){
			low[u]=min(low[u],num[v]);
		}
	}
	if(low[u]==num[u]){
		ll x,curprice=c[u],cc=0;
		do{
			x=st.top();st.pop(),vis[x]=false;
			if(curprice>c[x]){
				curprice=c[x],cc=1;
			}else if(curprice==c[x]){
				cc++;
			}
		}while(x!=u);
		price+=curprice,ways=(ways*cc)%modN;
	}
}
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){cin>>c[i];}
	cin>>m;
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		g[u].push_back(v);
	}
	for(ll i=1;i<=n;i++){
		if(!num[i]){dfs(i);}
	}
	cout<<price<<" "<<ways;
}
