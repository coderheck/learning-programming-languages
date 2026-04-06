#include <cmath>
#include <iostream>
using namespace std;
#define tname "triangle"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
ll b,a;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>b>>a;
    // ta có diện tích tam giác = chiều cao * đáy / 2
    // => chiều cao = a * 2 / đáy
    float res=1.0*a*2/b;
    lout((ll)ceil(res)); // làm tròn lên (do chia nguyên)
}
