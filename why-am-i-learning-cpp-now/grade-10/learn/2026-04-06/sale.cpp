#include <iostream>
using namespace std;
#define tname "sale"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
ll n,k,p;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>k>>p;
    // mua k cây bút được tặng thêm 1 => 6 cái chỉ tốn 1
    // tách số bút cần mua = A + B với:
    // A = số nhóm k+1 bút * k (để tính số bút cần mua cho A nhóm) = floor(n/(k+1)) * k
    // B = số bút còn lại = n % (k+1)
    n=(n/(k+1))*k+n%(k+1);
    lout(n*p);
}
