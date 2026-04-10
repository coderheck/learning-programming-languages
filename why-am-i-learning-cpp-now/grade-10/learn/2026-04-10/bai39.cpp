// #include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "bai39"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    // cerr<<x<<" ";
const ll maxN=1005;;
ll n,a[maxN],az=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // VẬY THÌ THÔI CỨ ĐỂ LỜI TÔI NÓI CHO VƯƠNG TƠ NHỆN
    // ĐỂ BÀI TÔI VIẾT ĐI VÀO LÃNG QUÊNNNNNNNN
    for(ll i=1,x;i<=n;i++){
        cin>>x;
        if(x&1){a[az++]=x;}
    }
    lout(az);
    for(ll i=0;i<az;i++){oout(a[i]);}
}
