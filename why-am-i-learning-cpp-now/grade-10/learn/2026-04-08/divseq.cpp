#include <iostream>
using namespace std;
#define tname "divseq"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
const ll maxN=300005;
ll n,a[maxN],p[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=0;i<n;i++){cin>>a[i];}
    for(ll i=1,j;i<n;i++){
        j=p[i-1];
        while(j>0&&a[i]!=a[j]){j=p[j-1];}
        if(a[i]==a[j]){j++;}
        p[i]=j;
    }
    lout(n-p[n-1]);
}
