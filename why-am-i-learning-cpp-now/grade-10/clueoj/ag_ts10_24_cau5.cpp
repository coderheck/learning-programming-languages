#include <iostream>
using namespace std;
#define tname "ag_ts10_24_cau5"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):((a)==(b)?-inff:(b)))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
const ll maxN=405,modN=1000000000;
ll n,a[maxN],b[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){a[i]=i;}
    while(n>1){
        for(ll i=1;i<=n;i++){
            b[i]=(a[i]+a[i+1])%modN;
        }
        for(ll i=1;i<n;i++){a[i]=b[i];}
        n--;
    }
    fprintf(stdout,"%lld",a[1]);
    // lout(a[1]);
}
