#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
#include <cstddef>
using namespace std;
#define tname "uocso"
#define umap __gnu_pbds::gp_hash_table
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n"
#define oout(x) \
    cout<<x; \
    // cerr<<x;
// const ll inff=1LL<<62;
size_t n;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    // độ phức tạp tổng: O(N * sqrt(a))
    // số phép tính tối đa: 1000 * sqrt(100000000) = 10000000
    for(size_t a,res;n;n--){
        cin>>a;res=0;
        for(size_t i=1;i*i<=a;i++){
            if(a%i==0){res+=1+(i!=a/i);}
        }
        lout(res);
    }
}

// once upon a midnight dreary, while i pondered, weak and weary
// over many a quaint and curious volume of forgotten lore--
// while i nodded, nearly napping, suddenly there came a tapping,
// as of someone gently rapping, rapping at my chamber door.
// "'Tis some visitor," i muttered, "tapping at my chamber door--
// only this and nothing more.""
