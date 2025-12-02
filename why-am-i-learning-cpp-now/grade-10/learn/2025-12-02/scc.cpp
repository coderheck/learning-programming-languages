#include <iostream> 
#include <stack>
#include <vector>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
vector<vector<ll>>graph(maxN);
ll n,m,cnt=0,tpltm=0,num[maxN],low[maxN];
bool inStack[maxN];
stack<ll>st;
void tarjan(const ll& u){
	num[u]=low[u]=++cnt;
	st.push(u),inStack[u]=true;
	for(const ll &v:graph[u]){
		if(!num[v]){ // chưa được duyệt
			tarjan(v);
			low[u]=min(low[u],low[v]);
		}else if(inStack[v]){ // back-edge tới v đang trong stack
			low[u]=min(low[u],num[v]);
		}
	}
	if(low[u]==num[u]){ // đỉnh u là gốc của một thành phần liên thông mạnh 
		tpltm++;
		ll x=st.top();st.pop();
		inStack[x]=false;
		while(x!=u){
			x=st.top();st.pop();
			inStack[x]=false;
		}
	}
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(ll i=1;i<=m;i++){
		ll u,v;cin>>u>>v;
		graph[u].push_back(v);
	}
	for(ll i=1;i<=n;i++){
		if(!num[i]){tarjan(i);}
	}
	cout<<tpltm;
}
