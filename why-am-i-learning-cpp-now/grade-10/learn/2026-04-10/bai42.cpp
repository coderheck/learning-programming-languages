// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "bai42"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
const ll maxN=1005;
ll n,a[maxN],up3[maxN],uz=0,ttt[maxN],tz=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // in the perfectly calculated world you envisioned
    // time becomes obscene and violated by something transparent
    // plastic i miss you, illusion i miss you
    // sadistic i miss you
    for(ll i=1;i<=n;i++){cin>>a[i];}
    for(ll i=1;i<=n;i++){
        if(i>1&&a[i]-3==a[i-1]){up3[uz++]=a[i];}
        if(i>1&&i<n&&a[i]==a[i-1]+a[i+1]){ttt[tz++]=a[i];}
    }
    for(ll i=0;i<uz;i++){oout(up3[i]);}
    lout("");
    for(ll i=0;i<tz;i++){oout(ttt[i]);}
}
