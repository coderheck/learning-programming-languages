#include <iostream>
#include <vector>
using namespace std;
#define taskname "capdoi"
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
vector<vector<ll>>graph(maxN);
ll p[maxN],n,k,res=0,bit[maxN],rr=1;
void update(ll i,ll val){
	while(i<=n){bit[i]+=val,i+=i&-i;}
}
ll query(ll i){
	ll ret=0;
    while(i){ret+=bit[i];i-=i&-i;}
    return ret;
}
void dfs(ll u){
    ll L=max(1,u-k),R=min(n,u+k);
    res+=query(R)-query(L-1);
    update(u,1);
	for(ll v:graph[u]){dfs(v);}
    update(u,-1);
}
int main(){
	if(fopen(taskname".inp","r")){
		freopen(taskname".inp","r",stdin);
		freopen(taskname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll i=1;i<=n-1;i++){
        ll u,v;cin>>u>>v;
        graph[u].push_back(v),p[v]=u;
    }
    while(p[rr]!=0){rr=p[rr];}
    dfs(rr);
    cout<<res;
}

