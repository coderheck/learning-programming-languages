#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "ip"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<""; \
    // cerr<<x<<"";
const ll maxN=500000;
ll n,a;
umap<ll,bool>mark;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // đánh dấu và duyệt O(2n)
    while(n--){cin>>a;mark[a]=true;}
    for(ll i=1;i<=maxN+1;i++){
        if(!mark[i]){lout(i);return 0;}
    }
}
