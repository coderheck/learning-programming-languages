#include <iostream>
using namespace std;
#define tname "sum"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
ll n;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    /*
     * T_n = n^2 - (n-1)^2
     *     = n^2 - (n^2 - 2n + 1)
     *     = n^2 - n^2 + 2n - 1
     *     = 2n-1
     * nhận thấy: 2*1-1 + 2*2-1 + 2*3-1 + ... == 1 + 3 + 5 + ...
     * bài toán trở về tìm tổng n số lẻ đầu tiên
    */
    lout(n*n);
    // tổng n số lẻ đầu tiên = n^2 (tính bằng thực nghiệm HOẶC
    // suy ra từ công thức cấp số cộng)
}
