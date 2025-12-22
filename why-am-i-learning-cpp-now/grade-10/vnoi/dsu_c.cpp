#include <iostream>
#include <string>
#include <utility>
using namespace std;
#define ll long long
#define tname "dsu_c"
const ll maxN=100005,maxQ=500005;
ll n,k,par[maxN],sz[maxN],cc[maxN];
struct qq{ll t,x,y;}quer[maxQ];
string t;
void make(const ll &u){
    par[u]=u,sz[u]=1,cc[u]=0;
}
ll ffind(const ll &u){
    return u==par[u]?u:ffind(par[u]);
}
ll uuni(ll a,ll b){
    a=ffind(a),b=ffind(b);
    if(a!=b){
        if(sz[a]<sz[b]){swap(a,b);}
        par[b]=a,sz[a]+=sz[b];
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        // freopen(tname".out","w",stdout);
    }
    cin>>n>>k;
    for(ll i=1;i<=n;i++){make(i);}
    for(ll i=1;i<=k;i++){
        cin>>t;
        if(t[0]=='g'){

        }
    }

}
