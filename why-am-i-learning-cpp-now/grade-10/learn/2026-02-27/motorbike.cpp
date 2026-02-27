#include <iostream>
#include <vector>
#include <random>
#include <chrono>
using namespace std;
#define ll long long
#define tname "motorbike"
#define rand rd
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
#define getbit(x,k) ((x)>>(k))&1
const ll maxN=105;
mt19937_64 rd(chrono::steady_clock::now().time_since_epoch().count());
ll V,E,A,B,cd,md,cp,mp,X,Y,K,Q;
struct edge{ll v,w,q;};
vector<vector<edge>>g(maxN);
ll Rand(const ll &L,const ll &R){return L+rd()%(R-L+1);}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>V>>E>>cd>>md>>cp>>mp>>A>>B;
    for(ll i=1;i<=E;i++){
        cin>>X>>Y>>K>>Q;
        g[X].push_back({Y,K,Q});
        g[Y].push_back({X,K,Q});
    }
    lout(Rand(1,1LL<<17));
}
