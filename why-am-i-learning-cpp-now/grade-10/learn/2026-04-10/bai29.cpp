#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <iomanip>
using namespace std;
#define tname "bai29"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
// const ll inff=1LL<<62;
ll n;long double res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // chịu
    for(ll i=1;i<=n;i++){res+=1.0/i;}
    lout(fixed<<setprecision(5)<<res);
}
