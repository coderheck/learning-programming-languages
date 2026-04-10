// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "book"
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
// const ll maxN=10005;
ll Q;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // mỗi lần lật trang thì ta nhảy được 2 trang
    // có 2 cách để lật:
    // -) từ đầu sách: floor(p/2) lần
    // -) từ cuối sách: floor((n-p)/2) lần
    // lấy min của 2 cách lật
    for(ll q=1,n,p;q<=Q;q++){
        cin>>n>>p;
        lout(min(p>>1,(n-p)>>1));
    }
}
