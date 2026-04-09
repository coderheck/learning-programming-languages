#include <iostream>
using namespace std;
#define tname "tree"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
ll Q;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // sau n lần tăng trưởng thì cây cao:
    // h = -- 2n        (n lẻ)
    //     |
    //     -- 2n - 1    (n chẵn)
    // chú ý trường hợp n = 0 tức cây không sinh trường => h = 1
    for(ll q=1,n;q<=Q;q++){
        cin>>n;
        lout((!n?1:(n<<1)-!(n&1)));
    }
}
