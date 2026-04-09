#include <ext/pb_ds/assoc_container.hpp> // for policy hash table
#include <iostream>
using namespace std;
#define tname "subset"
#define umap __gnu_pbds::gp_hash_table
// #define umap unordered_map
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n"
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" "
// const ll inff=1LL<<62;
ll gcd(const ll &a,const ll &b){return(b)?gcd(b,a%b):a;}
ll Q;
umap<ll,ll>c;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>Q;
    // gọi S là tập các giá trị khác nhau trong A, tính:
    // g = gcd(a_1,a_2,a_3,a_...) với a_i thuộc S
    // nếu g = 1 => YES và ngược lại
    // ta có:
    // -) TH1: gcd(S) = d > 1
    // => mọi phần tử đều chia hết cho d => mọi tập con cũng chia
    // hết cho d => luôn tồn tại x = d > 1 là ước chung => NO!!!
    // -) TH2: gcd(S) = 1
    // vì gcd toàn bộ tập = 1 => tồn tại một tập con có gcd = 1
    for(ll q=1,n,a,g;q<=Q;q++){
        c.clear(),g=0;
        cin>>n;
        while(n--){cin>>a;c[a]=1;}
        for(umap<ll,ll>::iterator i=c.begin();i!=c.end();i++){
            g=gcd(g,i->first);
        }
        lout((g==1?"YES":"NO"));
    }
}
