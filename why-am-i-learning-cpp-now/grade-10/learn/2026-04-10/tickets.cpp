// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "tickets"
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
ll Q;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // 3 trường hợp xảy ra
    // TH1: mua toàn bộ là vé lẻ 
    //      => c1 = n * a
    // TH2: mua vé bộ và còn thiếu thì mua lẻ 
    //      số bộ vé mua     k = floor(n/m);
    //      số vé còn thiếu  r = n % m;
    //      => c2 = k * b + r * a;
    // TH3: mua hết vé bộ
    //      số bộ vé mua     k = floor(n/m);
    //      => c3 = (k + 1) * b;
    for(ll q=1,n,m,a,b,k;q<=Q;q++){
        cin>>n>>m>>a>>b;
        k=n/m;
        lout(min(n*a,min(k*b+(n%m)*a,(k+1)*b)));
    }
}
