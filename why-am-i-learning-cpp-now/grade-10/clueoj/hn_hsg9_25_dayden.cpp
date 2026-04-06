#include <iostream>
#include <algorithm>
using namespace std;
#define tname "hn_hsg9_25_dayden"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=100005;
ll n,m,Q,k,x[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m>>Q>>k;
    for(ll i=1;i<=m;i++){cin>>x[i];}
    sort(x+1,x+m+1);
    for(ll q=1,p,l,r,cnt;q<=Q;q++){
        cin>>p;
        l=p-k,r=p+k;
        cnt=upper_bound(x+1,x+m+1,r)-lower_bound(x+1,x+m+1,l);
        lout((cnt&1?"D":"V"));
    }
}
