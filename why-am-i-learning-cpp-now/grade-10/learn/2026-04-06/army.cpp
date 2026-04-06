#include <iostream>
using namespace std;
#define tname "army"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
ll n,m;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    // trong ô -> 1 ô
    // trên cạnh -> 2 ô
    // trên giao điểm -> 4 ô
    // chia bản đổ thành các nhóm 2x2 thì số phát bắn tối thiểu:
    // res = ceil(n/2) * ceil(m/2)
    lout(((n|1)>>1)*((m|1)>>1));
}
