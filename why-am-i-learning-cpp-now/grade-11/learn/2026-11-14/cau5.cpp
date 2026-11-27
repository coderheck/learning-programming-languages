#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define tname "cau5"
#define ll long long
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
const ll maxn=100005,inff=1ll<<62;
struct edge{
    ll u,v,w;
    bool operator<(const edge &rhs)const{return w<rhs.w;}
};
ll n,m,k,par[maxn],sz[maxn];
ll ff(const ll &u){return u==par[u]?u:par[u]=ff(par[u]);}
void uu(ll u,ll v){
    u=ff(u),v=ff(v);
    if(u!=v){
        if(sz[u]<sz[v]){ll tm=u;u=v,v=tm;}
        par[v]=u,sz[u]+=sz[v];
    }
}
bool keep[maxn*2];
vector<edge>e;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m>>k;
    for(ll i=1,a;i<=k;i++){cin>>a;keep[a]=true;}
    for(ll i=1,u,v,w;i<=m;i++){
        cin>>u>>v>>w;
        e.push_back({u,v,w});
        e.push_back({v,u,w});
    }
    if(k==0){ // sub 1: k=0 ==> kruskal minimum spanning tree
        ll res=0;
        sort(e.begin(),e.end());
        for(ll i=1;i<=n;i++){par[i]=i,sz[i]=1;}
        for(const edge &ee:e){
            if(ff(ee.u)!=ff(ee.v)){
                uu(ee.u,ee.v);res+=ee.w;
            }
        }
        lout(res);
    }else{

    }
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
