#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "bai30"
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
ll n;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // tổng số nguyên lẻ [1;N] => N chẵn thì số lẻ cuối = N - 1
    // tổng dãy số cách đều S = ((đầu + cuối) * số số hạng) / 2
    // số số hạng = (cuối - đầu) / khoảng cách + 1
    if(!(n&1)){n--;}
    lout((n+1)*((n-1)/2+1)/2);
}
