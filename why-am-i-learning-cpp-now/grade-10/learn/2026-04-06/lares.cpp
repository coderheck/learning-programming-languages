#include <iostream>
using namespace std;
#define tname "lares"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define la(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
ll m,n,k;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>m>>n>>k;
    // chặt nhị phân tìm P sao cho:
    // - 2P <= m
    // - P <= n
    // - (m + n) - 3P >= k
    ll l=0,r=min(m>>1,n),p,res=0;
    while(l<=r){
        p=(l+r)>>1;
        if(p*2<=m && p<=n && (m+n)-p*3>=k){res=p,l=p+1;}else{r=p-1;}
    }
    la(res);
}
