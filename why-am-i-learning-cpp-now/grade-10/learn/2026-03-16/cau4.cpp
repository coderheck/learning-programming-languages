#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "cau4"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=1000005;
ll n,a[maxN],s[maxN],res=0;
umap<ll,ll>pos;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        s[i]=s[i-1]+a[i];
        if(!pos[a[i]]){pos[a[i]]=i;}
        res=max(res,a[i]);
    }
    for(ll i=1;i<=n;i++){
        if(pos[a[i]]&&pos[a[i]]<i){
            res=max(res,s[i]-s[pos[a[i]]-1]);
        }
    }
    lout(res);
}
