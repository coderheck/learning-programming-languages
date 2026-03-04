#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
#define tname "ancestor"
#define ll long long
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=1000005,mL=20;
ll n,Q,ee=1,up[maxN][mL];bool vis[maxN];
// up[i][j]: tổ tiên thứ 2^j của đỉnh i
// ee: x nhỏ nhất sao cho 2^x > số đỉnh của cây
vector<vector<ll>>g(maxN);
queue<ll>q;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;ee=log2(n)+1;
    for(ll i=2;i<=n;i++){
        ll u,v;cin>>u>>v;
        g[u].push_back(v);g[v].push_back(u);
    }
    cin>>Q;
    ll rr=1;up[rr][0]=-(vis[rr]=true);
    q.push(rr);
    while(q.size()){
        ll u=q.front();q.pop();
        for(const ll &v:g[u]){
            if(!vis[v]){vis[v]=true,up[v][0]=u,q.push(v);}
        }
    }
    for(ll e=1;e<ee;e++){
        for(ll u=1;u<=n;u++){
            ll m=up[u][e-1];
            up[u][e]=(m==-1?-1:up[m][e-1]);
        }
    }
    while(Q--){
        ll k,u;cin>>k>>u;
        for(ll e=ee-1;e>=0;e--){
            if(u==-1){break;}
            if((1<<e)&k){u=up[u][e];}
        }
        lout(u);
    }
}
