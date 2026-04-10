// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <cmath>
using namespace std;
#define tname "bus"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    // cerr<<x<<" ";
// const ll maxN=10005;
ll n,d,t;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>d>>t;
    // ta nhận thấy thời điểm của chuyến k T_k = T_0 + (k-1) * D
    // khi đó cần tìm chuyến k nhỏ nhất thỏa mãn: 
    //    T_0 + (k-1) * D >= S_i
    // biến đổi công thức ta có: k = ceil((S_i - T_0) / D) + 1
    // chú ý trường hợp đến trước chuyến k = 1
    for(ll i=1,s;i<=n;i++){
        cin>>s;
        oout((s<=t?1:ceil(1.0*(s-t)/d)+1));
    }
}
