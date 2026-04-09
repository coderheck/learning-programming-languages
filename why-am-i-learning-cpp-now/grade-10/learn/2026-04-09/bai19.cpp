#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "bai18"
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
size_t n,res=0;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    while(n){res+=n%10,n/=10;}
    lout(res);
}

// once upon a midnight dreary, while i pondered, weak and weary
// over many a quaint and curious volume of forgotten lore--
// while i nodded, nearly napping, suddenly there came a tapping,
// as of someone gently rapping, rapping at my chamber door.
// "'Tis some visitor," i muttered, "tapping at my chamber door--
// only this and nothing more.""
