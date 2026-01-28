#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define tname "atcoder_dp_p"
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define max(a,b) ((a)>(b)?(a):(b))
const ll maxN=10005,modN=1000000007;
ll n,k,res=0;
vector<vector<ll>>g(maxN);
ll dfs(const ll &u){
    ll sz=1;
    for(const ll &v:g[u]){sz+=dfs(v);}
    if(sz>=k){res++;return 0;}
    return sz;
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k;
    for(ll i=2;i<=n;i++){
        ll p;cin>>p;
        g[p].push_back(i);
    }
    dfs(1);
    lout(res);
}
